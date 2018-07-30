#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "arithmetic.h"
#include <QString>


void MainWindow::onButtonClicked(QString strFunc)
{
Arithmetic calc;
int num1 = txtNum1->text().toInt();
int num2 = txtNum2->text().toInt();

if(strFunc == "+"){
    output->display(
                QString::number(calc.addition(num1, num2))
                );
}
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget* w = new QWidget();
    QFormLayout* layout = new QFormLayout();
    w->setLayout(layout);
    output = new QLCDNumber();
    txtNum1 = new QLineEdit();
    txtNum2 = new QLineEdit();

    btnPlus = new QPushButton("+");
    btnMinus = new QPushButton("-");
    btnMultiply = new QPushButton("*");
    btnDivide = new QPushButton("/");
    btnClose = new QPushButton("Close");
    btnClear = new QPushButton("Clear");

    connect(btnPlus,SIGNAL(clicked(bool)),this,SLOT(onButtonClicked(btnPlus->text())));
    connect(btnMinus,SIGNAL(clicked(bool)),this,SLOT(onButtonClicked(btnMinus->text())));
    connect(btnMultiply,SIGNAL(clicked(bool)),this,SLOT(onButtonClicked(btnMultiply->text())));
    connect(btnDivide,SIGNAL(clicked(bool)),this,SLOT(onButtonClicked(btnDivide->text())));
    connect(btnClose,SIGNAL(clicked(bool)),this,SLOT(onButtonClicked(btnClose->text())));
    connect(btnClear,SIGNAL(clicked(bool)),this,SLOT(onButtonClicked(btnClear->text())));

    layout->addRow(new QLabel(""),btnPlus);
    layout->addRow(txtNum1,btnMinus);

    layout->addRow(txtNum2,btnMultiply);

    layout->addRow(output,btnDivide);

    layout->addRow(btnClose,btnClear);

    setCentralWidget(w);
}

MainWindow::~MainWindow()
{
    delete ui;
}

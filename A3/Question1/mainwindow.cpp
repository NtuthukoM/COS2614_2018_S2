#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include <QAction>
#include <QMenuBar>
#include <QString>
#include <QFont>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    txtEditor = new QTextEdit();
    setCentralWidget(txtEditor);
    dgFont = new QFontDialog(this);
    //Menu:
    QMenuBar* menuBar = new QMenuBar();

    QMenu* fileMenu = new QMenu("&File", this);
    QActionGroup* fGroup = new QActionGroup(this);
    fGroup->addAction("Exit");
    fileMenu->addActions(fGroup->actions());
    menuBar->addMenu(fileMenu);
    QActionGroup* aGroup = new QActionGroup(this);
    aGroup->addAction("Bold");
    aGroup->addAction("Underline");
    aGroup->addAction("Italics");
    aGroup->addAction("Font");
    QMenu* formatMenu = new QMenu("&Format", this);
    formatMenu->addActions(aGroup->actions());
    menuBar->addMenu(formatMenu);
    setMenuBar(menuBar);
    connect(aGroup, SIGNAL(triggered(QAction*)),
    this, SLOT(actionEvent(QAction*)));
    connect(fGroup, SIGNAL(triggered(QAction*)),
    this, SLOT(actionEvent(QAction*)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow::actionEvent(QAction *act)
{
    QString strAction = act->text();
    if(strAction == "Exit"){
        close();
    } else if(strAction == "Bold"){
        txtEditor->setFontWeight(QFont::Bold);

    } else if(strAction == "Underline"){
        txtEditor->setFontUnderline(true);
    } else if(strAction == "Italics"){
        txtEditor->setFontItalic(true);
    } else if(strAction == "Font"){
        bool ok;
        QFont font = QFontDialog::getFont(&ok, QFont("Times", 12), this);
        if (ok) {
            // font is set to the font the user selected:
            txtEditor->setFont(font);
        }
    }
}

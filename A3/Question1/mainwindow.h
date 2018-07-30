#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QActionEvent>
#include <QFontDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTextEdit* txtEditor;
    QFontDialog* dgFont;
private slots:
    actionEvent(QAction* act);
};

#endif // MAINWINDOW_H

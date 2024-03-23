#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    /**
     * The meta-object compiler converts this macro into equivalent c++ code.
     * The Q_OBJECT macro allows us to use signals and slots
     */

    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr); // Constructor
    ~MainWindow(); // Destructor

private slots:
    void on_pushButtonClose_clicked();

private:
    Ui::MainWindow *ui; // Pointer to MainWindow ui object which will be used to access all widgets
};
#endif // MAINWINDOW_H

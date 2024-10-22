#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <QFont>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ClearButton_clicked();

    void on_OneButton_clicked();

    void on_PlusButton_clicked();

    void on_TwoButton_clicked();

    void on_ResultButton_clicked();

    void on_ThreeButton_clicked();

    void on_FourButton_clicked();

    void on_FiveButton_clicked();

    void on_SixButton_clicked();

    void on_SevenButton_clicked();

    void on_EightButton_clicked();

    void on_NineButton_clicked();

    void on_ZeroButton_clicked();

    void on_MinusButton_clicked();

    void on_MultiplyButton_clicked();

    void on_DivideButton_clicked();

    void on_PointButton_clicked();

    void on_HelpButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

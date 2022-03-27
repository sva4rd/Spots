#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow();

private slots:
    void on_twSpots_cellClicked(int row, int column);

    void on_mnuNewGame_triggered();

    void on_mnuRestart_triggered();

    void on_mnuExit_triggered();

private:
    Ui::MainWindow *ui;
    QTableWidgetItem *item[16];
    QPixmap px[16];
    void showTable();
};
#endif // MAINWINDOW_H

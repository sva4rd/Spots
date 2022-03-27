#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Spots.h"
#include <QMessageBox>

Spots object;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    for (auto i = 0; i < 4; i++)
    {
        ui->twSpots->setColumnWidth(i, 70);
        ui->twSpots->setRowHeight(i, 70);
    }

    for(int i = 0; i < 16; i++)
    {
        if(i==0)
            px[i]= QPixmap (":/numbers/1.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==1)
            px[i]= QPixmap (":/numbers/2.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==2)
            px[i]= QPixmap (":/numbers/3.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==3)
            px[i]= QPixmap (":/numbers/4.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==4)
            px[i]= QPixmap (":/numbers/5.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==5)
            px[i]= QPixmap (":/numbers/6.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==6)
            px[i]= QPixmap (":/numbers/7.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==7)
            px[i]= QPixmap (":/numbers/8.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==8)
            px[i]= QPixmap (":/numbers/9.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==9)
            px[i]= QPixmap (":/numbers/10.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==10)
            px[i]= QPixmap (":/numbers/11.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==11)
            px[i]= QPixmap (":/numbers/12.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==12)
            px[i]= QPixmap (":/numbers/13.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==13)
            px[i]= QPixmap (":/numbers/14.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==14)
            px[i]= QPixmap (":/numbers/15.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
        if(i==15)
            px[i]= QPixmap (":/numbers/white.jpg").scaled(66, 66, Qt::IgnoreAspectRatio);
    }

    for(int i = 0; i < 16; i++)
        {
            item[i]=new QTableWidgetItem;
            item[i]->setData(Qt::DecorationRole, px[i]);
        }
    showTable();
}

void MainWindow::showTable()
{

    for (auto i = 0, z = 0; i < 4; i++)
        for (auto j = 0; j < 4; j++)
            ui->twSpots->setItem(i, j, new QTableWidgetItem(*item[object.getItem(i, j)]));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_twSpots_cellClicked(int row, int column)
{
    object.move(row, column);
    showTable();
    if(object.isFinished())
    {
        if(QMessageBox::question(this, "Вы победили!", "Желаете сыграть ещё раз?",
                              QMessageBox::Yes | QMessageBox::No) == QMessageBox::No)
            QApplication::quit();
        else
        {
            object.startGame();
            showTable();
        }
    }
}


void MainWindow::on_mnuNewGame_triggered()
{
    object.startGame();
    showTable();
}



void MainWindow::on_mnuRestart_triggered()
{
    object.restartGame();
    showTable();
}


void MainWindow::on_mnuExit_triggered()
{
    QApplication::quit();
}


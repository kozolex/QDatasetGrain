#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonLoad_released()
{
    QStringList filenames = QFileDialog::getOpenFileNames(this,tr("BMP files"),QDir::currentPath(),tr("Bitmap files (*.bmp);;All files (*.*)") );
    if( !filenames.isEmpty() )
    {
        for (int i =0;i<filenames.count();i++)
            ui->listWidgetFilesAdded->addItem(filenames.at(i));
    }
}

void MainWindow::on_pushButton_released()
{
    ui->listWidgetFilesAdded->clear();
}

void MainWindow::on_listWidgetFilesAdded_clicked(const QModelIndex &index)
{
    QPixmap monPixmap(ui->listWidgetFilesAdded->item(index));

}

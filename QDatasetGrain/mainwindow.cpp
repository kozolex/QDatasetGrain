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
    QStringList filenames = QFileDialog::getOpenFileNames(this,tr("Image files"),QDir::currentPath(),tr("Images (*.png *.png *.jpg *.tif *.tiff);;All files (*.*)") );
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

void MainWindow::on_listWidgetFilesAdded_clicked()
{
    QGraphicsScene *graphic = new QGraphicsScene ( this);
    QPixmap myPixmap;
    ui->labelFileName->setText(ui->listWidgetFilesAdded->currentItem()->text());
    if(!myPixmap.load(ui->listWidgetFilesAdded->currentItem()->text())){
          qWarning("Failed to load");
      }
    myPixmap = myPixmap.scaledToWidth(ui->graphicsViewMain->width());
    graphic -> addPixmap( myPixmap);
    ui ->graphicsViewMain->setScene(graphic);


}

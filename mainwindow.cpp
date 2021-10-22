#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include "dialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditCIN->setValidator(new QIntValidator(0,99999999,this));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    client c ;
    c.setcin (ui->lineEditCIN->text());
    c.setprenom(ui->lineEditPRENOM->text());
    c.setnom(ui->lineEditNOM->text());


  Dialog d;
  d.setclient(c);
  d.exec();
}

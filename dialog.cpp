#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setclient(client c)
{

    ui->lineEditCIN->setText(c.get_cin());
    ui->lineEditNOM->setText(c.get_nom());
    ui->lineEditPRENOM->setText(c.get_prenom());

}

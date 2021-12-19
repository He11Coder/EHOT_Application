#include "reg_window.h"
#include "ui_reg_window.h"

reg_window::reg_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reg_window)
{
    ui->setupUi(this);
}

reg_window::~reg_window()
{
    delete ui;
}

void reg_window::on_nameEdit_textEdited(const QString &arg1)
{

}


void reg_window::on_passEdit_textEdited(const QString &arg1)
{

}


void reg_window::on_confirmEdit_textEdited(const QString &arg1)
{

}


void reg_window::on_registerBP_clicked()
{

}


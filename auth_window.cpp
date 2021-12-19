#include "auth_window.h"
#include "ui_auth_window.h"

auth_window::auth_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::auth_window)
{
    ui->setupUi(this);
}

auth_window::~auth_window()
{
    delete ui;
}

void auth_window::on_nameEdit_textEdited(const QString &arg1)
{

}


void auth_window::on_passEdit_textEdited(const QString &arg1)
{

}


void auth_window::on_loginPB_clicked()
{

}


void auth_window::on_registerBP_clicked()
{

}

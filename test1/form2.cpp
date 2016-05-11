#include "form2.h"
#include "ui_form2.h"
#include "ugl.h"

using namespace std;
Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
}

Form2::~Form2()
{
    delete ui;
}

void Form2::on_Add_clicked()
{
    string user = ui->nuser->text().toStdString();
    string pass = ui->npass->text().toStdString();
    string confirm = ui->ncpass->text().toStdString();
    if ((user == "") || (pass == "") || (confirm == ""))
        ui->error->setText("Empty field !");
    else if (pass != confirm)
        ui->error->setText("Password does not match");
    else
    {
             ft_add(user, pass);
             ui->error->setText("User created !");
    }
}

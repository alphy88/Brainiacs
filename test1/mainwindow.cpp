#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dataclass.h"
#include "ft_stuff.cpp"
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ft_m();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
  //  std::cout << ui->username->text().toStdString() << ui->password->text().toStdString();
    string user = ui->username->text().toStdString();
    string pass = ui->password->text().toStdString();
    ft_search(user, pass);
}

void MainWindow::on_print_clicked()
{
    ft_print();
}

void MainWindow::on_Add_clicked()
{
    string user = ui->nuser->text().toStdString();
    string pass = ui->npass->text().toStdString();
    string confirm = ui->ncpass->text().toStdString();
    if ((user == "") || (pass == "") || (confirm == ""))
        ui->error->setText("Empty field !");
    else if (pass != confirm)
        ui->error->setText("Password does not match");
    else if (m.find(encryptDecrypt(user)) != m.end())
        ui->error->setText("Existing username !");
    else if (strchr(user.c_str(), '`') != NULL)
        ui->error->setText("Username must not contain the ` character");
    else
    {
             ft_add(m, user, pass);
             ui->error->setText("User created !");
    }
}

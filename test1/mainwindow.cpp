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

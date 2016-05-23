#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ugl.h"
#include "stdio.h"
#include "unistd.h"
#include "iostream"
#include "dataclass.h"
#include  <QStringListModel>
#include "form2.h"
#include "qsshsocket.h"

extern map <string, string> m;
extern sqlite3 *db;
QStringListModel *model;
  QSshSocket  qsshsocket;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
      char *zErrMsg = 0;
      int rc;
      db = NULL;
      rc = sqlite3_open("test.db", &db);

      if( rc ){
         fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
         exit(0);
      }else{
         fprintf(stderr, "Opened database successfully\n");
         ft_definetable();
      }
      model = new QStringListModel(this);
      model->insertColumn(0);

      connect(&qsshsocket, SIGNAL(connected()), this, SLOT(isConnected()) );
}

MainWindow::~MainWindow()
{
    delete ui;
    sqlite3_close(db);
    cout << "db saved" << endl;
}
void MainWindow::isConnected()
{
std::cout << "is connected" ;
}

void MainWindow::on_pushButton_clicked()
{
  //std::cout << ui->username->text().toStdString() << ui->password->text().toStdString();
    string user = ui->username->text().toStdString();
    string pass = ui->password->text().toStdString();

    /*if (ft_search(user, pass))
    {
        form = new Form2(this);
        form->show();
        this->setCentralWidget(form);
    }*/

    qsshsocket.connectToHost("10.230.2.29");
    qsshsocket.login(user.c_str(),pass.c_str());
    qsshsocket.start();
  //  qsshsocket.run();
}

void MainWindow::on_print_clicked()
{
    ft_print();
}


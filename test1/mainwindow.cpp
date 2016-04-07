#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ugl.h"
#include "dataclass.h"

extern map <string, string> m;
extern sqlite3 *db;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ft_m();
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
}

MainWindow::~MainWindow()
{
    delete ui;
    sqlite3_close(db);
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
            // ft_add(m, user, pass);
             ui->error->setText("User created !");
    }
}

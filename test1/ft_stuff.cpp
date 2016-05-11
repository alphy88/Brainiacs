#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <fstream>
#include "ugl.h"
#include <utility>
#include "form2.h"

extern map <string, string> m = {};
extern sqlite3 *db = NULL;

bool ok = false;

static int callback(void *NotUsed, int argc, char **argv, char **azColName){
   int i;
   for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

static int loginok(void *NotUsed, int argc, char **argv, char **azColName)
{
    int i;
      for(i=0; i<argc; i++)
          ok = true;
      return 0;
}

void	ft_add(string user, string pass)
{
    char    *zErrMsg = 0;
    int     rc;
    string  s = "INSERT INTO TABEL (USERS,PASS) VALUES ('" + encryptDecrypt(user) + "','" + encryptDecrypt(pass) + "');";
    const   char    *c = s.c_str();

    rc = sqlite3_exec(db, c, callback, 0, &zErrMsg);
       if( rc != SQLITE_OK ){
       fprintf(stdout, "SQL error: %s\n", zErrMsg);
          sqlite3_free(zErrMsg);
       }else{
          fprintf(stdout, "User added successfully\n");
       }
}

void    ft_definetable()
{
    char    *zErrMsg = 0;
    int     rc;

    if (db == NULL)
        return;

    char    *c = "create table if not exists TABEL (USERS CHAR[50] PRIMARY KEY NOT NULL,"\
                 "PASS CHAR[50] NOT NULL);";

    rc = sqlite3_exec(db, c, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK )
    {
       fprintf(stdout, "SQL error: %s\n", zErrMsg);
       sqlite3_free(zErrMsg);
    }else
    {
          cout << "Table created successfully\n" << endl;
    }
}

void	ft_print()
{
   char *zErrMsg;
   const char* data = "Callback function called";
   char *sql = "SELECT USERS from TABEL";

   int  rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   }else{
      fprintf(stdout, "Operation done successfully\n");
   }
}

bool	ft_search(string s1, string s2)
{
	string	user(encryptDecrypt(s1));
	string	pass(encryptDecrypt(s2));
    const char* data = "Callback function called";
    char *zErrMsg;
    string ex = "SELECT * FROM TABEL WHERE USERS LIKE '"+user+"' AND PASS LIKE'"+pass+"'";
    const char *sql = ex.c_str();
    ok = false;
    int     rc = sqlite3_exec(db, sql, loginok, (void*)data, &zErrMsg);

    if (rc == SQLITE_OK && ok)
    {
        cout << "log in successful" << endl;
        return true;
    }
    else
        cout << "nope" << endl;
    return false;
}

void	ft_delete()
{
	ofstream	f;

	f.open("test.txt", ofstream::out | ofstream::trunc);
	f.close();
}


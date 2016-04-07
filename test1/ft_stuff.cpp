



#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <fstream>
#include "ugl.h"
#include <utility>


extern map <string, string> m = {};
extern sqlite3 *db = NULL;

static int callback(void *NotUsed, int argc, char **argv, char **azColName){
   int i;
   for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

void	ft_add(string user, string pass)
{
    char    *zErrMsg = 0;
    int     rc;
    const char    *c = std::string("INSERT INTO TABEL (USERS,PASS) VALUES ("+encryptDecrypt(user)+", "+encryptDecrypt(pass)+" );").c_str();




}

void    ft_definetable()
{
    char    *zErrMsg = 0;
    int     rc;

    if (db == NULL)
        return;
    char    *c = "create table if not exists tabel (USERS CHAR[50] PRIMARY KEY NOT NULL,"\
                 "PASS CHAR[50] NOT NULL);";
    rc = sqlite3_exec(db, c, callback, 0, &zErrMsg);
       if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
          sqlite3_free(zErrMsg);
       }else{
          fprintf(stdout, "Table created successfully\n");
       }
}
void	ft_split(string s)
{
    size_t		a;

	a = s.find('+');
    m.insert(make_pair(s.substr(0, a), s.substr(a + 1)));
}

void	ft_m()
{
	ifstream	f("test.txt");
	string		s;
	
	while (getline(f, s))
		ft_split(s);
}

void	ft_print()
{
    for (auto it = m.begin(); it != m.end() ; ++it)
	{
		cout <<"user: \"" << encryptDecrypt(it->first) << "\" password: \"" \
			<< encryptDecrypt(it->second) << "\"" << endl;
    }
}

void	ft_search(string s1, string s2)
{
	string	user(encryptDecrypt(s1));
	string	pass(encryptDecrypt(s2));

    auto x = m.find(user);
	if (x == m.end())
		cout << "no such username" << endl;
	else
	{
		if (x->second == pass)
			cout << "log in successful" << endl;
		else
			cout << "wrong password" << endl;
    }
}

void	ft_delete()
{
	ofstream	f;

	f.open("test.txt", ofstream::out | ofstream::trunc);
	f.close();
}


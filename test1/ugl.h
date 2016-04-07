#ifndef UGL
#define UGL

#include <sqlite3.h>
#include <map>

using namespace std;

extern map <string, string> m;
extern sqlite3 *db;


void    ft_definetable();
string	encryptDecrypt(string toEncrypt);
void	ft_m();
void	ft_search(string s1, string s2);
void	ft_print();
void	ft_add(string user, string pass);









#endif

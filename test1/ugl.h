#ifndef UGL
#define UGL

#include <sqlite3.h>
#include <map>

using namespace std;

extern sqlite3 *db;


void    ft_definetable();
string	encryptDecrypt(string toEncrypt);
bool	ft_search(string s1, string s2);
void	ft_print();
void	ft_add(string user, string pass);









#endif

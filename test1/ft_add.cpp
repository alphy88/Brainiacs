



#include <string.h>
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

string  encryptDecrypt(string toEncrypt);

void	ft_add(map<string, string> m, string user, string pass)
{
    m.insert(make_pair(encryptDecrypt(user),encryptDecrypt(pass)));
	ofstream out("test.txt", ofstream::app);
	out << encryptDecrypt(user) << "+" << encryptDecrypt(pass) << endl;
	out.close();
}

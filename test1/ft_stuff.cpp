



#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <map>
#include <utility>

using namespace std;

map	<string, string> m;

string	encryptDecrypt(string toEncrypt);

void	ft_add(map<string, string>& m, string user, string pass);

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


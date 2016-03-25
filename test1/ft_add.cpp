



#include <string.h>
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

string  encryptDecrypt(string toEncrypt);

void	ft_add(map<string, string> m)
{
	string	user = "";
	string	pass = "";
	string	confirm = "";

	cout << "username:" << endl;
	getline(cin, user);
	while ((strchr(user.c_str(), '`') != NULL) || (m.find(encryptDecrypt(user)) != m.end()))
	{
		if (strchr(user.c_str(), '`') != NULL)
			cout << "username must not contain the ` character" << endl;
		else
			cout << "existing username; try another" << endl;
		cout << "username" << endl;
		getline(cin, user);
	}
	cout << "password:" << endl;
	getline(cin, pass);
	cout << "confirm password:" << endl;
	getline(cin, confirm);
	while (pass.compare(confirm) != 0)
	{
		cout << "retry\n" << "password:" << endl;
		getline(cin, pass);
		cout << "confirm password:" << endl;
		getline(cin, confirm);
	}
	ofstream out("test.txt", ofstream::app);
	out << encryptDecrypt(user) << "+" << encryptDecrypt(pass) << endl;
	out.close();
	cout << "for user:" << user << " the password is '" << pass << "'\n";
}





#include <iostream>

using namespace std;

string	encryptDecrypt(string toEncrypt)
{
    char	key = 'K'; //Any char will work
    string	output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key;
    return output;
}

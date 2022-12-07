#include <iostream>
#include <fstream> 
#include <cstdlib>  //necessary for the constant EXIT_FAILURE
#include <string>
using namespace std;

void fileOpen(fstream&, string, char);

void readWrite(fstream&,fstream&);

void main()
{

}
void keyGen(string keyFile)
{

}

void toBlock(string PTfile)
{

}
char Encrypt(char ch, int key)
{
int pos = ch - 'A';
pos = (pos + key) % 26; 
ch = pos + 'A';
return ch;
}

int Decrypt(char ch, int key)
{
int pos = ch - 'A';
pos = (pos - key + 26) % 26;
ch = pos + 'A';
return ch; 
}


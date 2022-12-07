/*Name: Julian Fernandini
Class: CPSC 122
Date Submitted: October 4th, 2022
Assignment: Project 4
Affine Cipher
*/

#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;
const int DICT[26] = {0,1,0,9,0,21,0,15,0,0,0,19,0,0,0,7,0,23,0,11,0,5,0,17,0,25};
const int numKey = 25;

void keyGen(string);
char Encrypt(char ch, int key);
int Decrypt(char ch, int key);
void fileOpen(fstream &, string name, char mode);
void toBlock(string PTfile);


void main(int argc, char*argv[])
{
    int mode = atoi(argv[1]);
    if(mode == '0')
    {
        keygen(argv[2]);
    }
    if(mode == '1'){
        controlFile(argv[2], argv[3], argv[4], mode);
    }
    if(mode == '2')
    {
        controlFile(argv[2], argv[3], argv[4], mode);
    }

    return 0;
}

void keyGen(string keyFile)
{
    fstream keyG;
    int DICT[12] = {1,3,5,7,9,11,15,17,19,21,23,25};
    fileOpen(keyG, keyFile, 'w');
    srand(time(0));
    int num = rand % 12;
    int a = DICT[num];
    keyG << a << "\n";
    int b;
    srand(time (0));
    b = 1 + rand() % 26;
    keyG << b; 
    keyG.close();

}

void fileOpen(fstream &, string name, char mode)
{
    String fileType;

    if (mode == 'r')
        fileType = "input";
    if (mode == 'w')
        fileType = "output";

    if (mode == 'r')
        file.open(name, ios::in); // available thorugh fstream
    else if (mode == 'w')
        file.open(name, ios::out); // available through fstream;

    if (file.fail()) // error condition
    {
        cout << "Error opening " << fileType << " file" << endl;
        exit(EXIT_FAILURE);
    }
}

void controlFile(string keyFile, string filein, string fileout, int mode)
{
    fstream fin;
    fstream fout; 
    fstream key;
    fileOpen(key, keyFile, 'r');
    int a, b; 
    key >> a; 
    key >> b;
    char ch; 
    fileOpen(fin, filein, 'r');
    fileOpen(fout, fileout, 'w');
    while(fin.peek() != EOF)
    {
        ch = fin.get();
        if(mode == 1)
        {
            if(isalpha(ch))
            {
                ch = toupper(ch);
                ch = Encrypt(ch, a, b);
            }
        }
        if(mode == 2)
        {
            if(isalpha(ch))
            {
                ch = Decrypt(ch, a, b);
            }
        }
        fout.put(ch);
    }
    fin.close();
    fout.close();
    key.close();
}

char Encrypt(char ch, int key1, int key2)
{
    int pos = ch - 'A';
    pos = (key1*pos + key2) % 26;
    ch = pos + 'A';
    return ch;
}

int Decrypt(char ch, int key1, int key2)
{
    int pos = ch - 'A';
    int message = getInv(key1);
    pos = ((message * pos) - (message * key2) + numKey * 26) % 26;
    ch = (pos + 'A');
    return ch;
}

// changes PTfile into block form
void toBlock(string PTfile)
{
    fstream PTfileFin;
    fstream BKfileFin;
    fileOpen(PTfileFin, PTfile, 'r');
    fileOpen(BKfileFin, "EncryptFile.txt" 'w');

    char ch;
    int check = 0;

    while (PTfileFin.peek() != EOF)
    {
        if (check == 50)
        {
            BKfileFout << '\n';
            check = 0;
        }

        ch = PTfile.get();

        if ((bool)isalpha(ch) == true)
        {
            if ((bool)isupper(ch) == true)
                {
                    BKfileFout << ch;
                    check++;
                }
            else
            {
                ch = toupper(ch);
                BKfile << ch;
                check++;
            }
        }
    }
    PTfileFin.close();
    BKfileFout.close();
    }
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
    int mode = atoi(argv[1])
    if(mode == '0')
    {
        keygen(keyFile);
    }
    if(mode == '1'){
        toBlock(argv[3]);
        secondEncrypt(argv[2],argv[4]);
    }
    if(mode == '2')
    {
        secondDecrypt(argv[2], argv[3], argv[4]);
    }

    return 0;
}

void keyGen(String keyFile)
{
    srand(time(0));
    int num = (rand() % 25) + 1;
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
            if (bool)
                isupper(ch == true)
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
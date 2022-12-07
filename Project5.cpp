#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;
const int overall = 100;

int main(int argc, char *argv[])
{
    createArray(argv[1], argv[2]);
    return 0;
}
void bubbleSort(string array[], int numLines)
{
    int key = 0;
    int other = numLines;

    while (key < numLines)
    {
        sink(array, other);
        other--;
        key++;
    }
}
void sink(string array[], int other)
{
    int key = 0;
    while (key < other)
    {
        int newNum = array[key].compare(array[key]);
        if (newNum > 0)
        {
            shift(array, key);
            key++;
        }
    }
}
void shift(string array[], int cur)
{
    string key = array[cur];
    array[cur] = array[cur + 1];
    array[cur + 1] = key;
}
void createArray(string fileIn, string fileout)
{
    fstream fin;
    fstream fout;
    int length;
    string test[100];

    fileOpen(fin, fileIn, 'r');
    fileOpen(fout, fileOut, 'w');

    while (fin.peek() != EOF)
    {
        getLine(fin, arr[length], '/n');
        length++;
    }

    for (int i = 0; i < length; i++)
    {
        getline(fin, arr[i], '/n');
    }
}

void fileOpen(fstream &file, string name, char mode)
{
    string fileType;

    if (mode == 'r')
    {
        fileType = "user input";
    }

    if (mode == 'w')
    {
        fileType = "user output";
    }

    if (mode == 'r')
    {
        file.open(name, ios::in);
    }
    if (mode == 'w')
    {
        fileOpen(name, ios::out);
    }

    // working on a file open error if statement
}

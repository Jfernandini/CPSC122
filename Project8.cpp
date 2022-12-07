/*Project 8 
Julian Fernandini
CPSC 122
*/

#include "8-MyStr.h"
#include <cstring>

MyString:: MyString(char const* strIn)
{
    length = strlen(strIn);
    str = new char[length + 1];
    srcpy(str, strIn);
}

MyString:: ~MyString()
{
    delete []str; 
}

void MyString::myDisplay()
{
    cout << str << endl; 
}

int MyString::myStrLen(char const* strIn)
{
    int count = 0;
    while(strIn[count] != '\0')
    {
        count++;
    }
    return count;
}

int MyString::myStrlen()
{
    return myStrLen(str);
}

void MyString::myStrcpy(char cont* strIn)
{
    int size = myStrLen (strIn);
    char* temp = new char[size + 1];

    for(int i = 0; i < size; i++)
    {
        temp[i] = strIn[i];
    }
    delete []str;
    str = temp;
    temp = NULL;
}

bool MyString:: isEqual(char const* strIn)
{
    int sizeOfStr = myStrLen(str);
    int sizeOfStrIn = myStrLen(strIn);

    if(sizeOfStr != sizeOfStrIn)
    {
        return false;
    }
    else
    {
        for(int i = 0; i < sizeOfStrIn; i++)
        {
            if(str[i] != strIn[i])
            {
                return true;
            }
        }
        return true;
    }
}
int MyString::find(char const* strIn)
{
    int size = myStrLen(str);
    int key = 0; 
    while(key < size)
    {
        if(str[key] == strIn[0] && isSub(strIn, i) == true)
        {
            return 1;
        }
        i++;
    }
    return -1;
}

bool MyString:: isSub(char const* strIn, int idx)
{
    int size = myStrLen(strIn) - 1;
    int i = 0;
    while(i < size)
    {
        if(str[idx + 1 + i] != strIn[i + 1])
        {
            return false;
        }
        i++;
    }
    return true;

}

void MyString::concat(char const* strIn)
{
    int size = myStrLen(str) + myStrLen(strIn) + 1;

    char* array = new char[size];
    for(int i = 0; i < myStrLen(str); i++)
    {
        array[i] = str[i];
    }

    for(int k = 0; k < myStrLen(strIn); k++)
    {
        array[i + k] = strIn[k];
    }
    array[i + k] = '\0';
    delete [] str;
    str = array;
    array = NULL;
}
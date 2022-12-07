/*Project 7 
Julian Fernandini
CPSC 122
*/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;

void shift(string array[], int cur);
void sink(int arr[], int min);
void bubbleSort(int arr[], int length);
void fileOpen(fstream &, string name, char mode);
int exponent(int base, int exp);
int binS(int* arr, int size, int target);
int myStrlen(char str[]);
void arrWrite(int* arr, int size, string fileName);
int myAtoi(char str[]);
int * arrLoad(int size, int limit);
int * arrMake(int size);

int main(int argc, char* argv[])
{
 int size = atoi(argv[1]); 
 int target = 37; 

 int* arr = new int[size]; //dynamic declaration of array

 for (int i = 0; i < size; i++)
   arr[i] = i;

 int found = binS(arr,size,target);

 if (found == -1)
   cout << "not found" << endl;
 else
   cout << "found at " << found << endl;

 return 0;
}

void shift(string array[], int cur)
{
    string key = array[cur];
    array[cur] = array[cur + 1];
    array[cur + 1] = key;
}

void sink(int arr[], int min)
{
    int i = 0;
    while(i < min)
    {
        if(arr[i] > arr[i + 1])
        {
            shift(arr, i)
        }
        
        i++;
    }
}

void bubbleSort(int arr[], int length)
{
    int traverse = 0; 
    int end = length - 1;
    while(traverse < length - 1)
    {
        sink(arr, end);
        traverse++;
        end--;
    }
}

void fileOpen(fstream &, string name, char mode)
{

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

int exponent(int base, int exp)
{
    int num = 1; 
    for(int i = 0; i < exp; i++)
    {
        num = num * base;
    }
    return num;
}

int binS(int* arr, int size, int target)
{
 int top, middle, bottom;
 top = middle = 0;
 bottom = size - 1;
 while(top <= bottom)
 {
  middle = (top + bottom) / 2;
  
  if (arr[middle] == target)  //found
     return middle;
  if (target < arr[middle])   //discard bottom half
     bottom = middle - 1;
  else
     top = middle + 1;        //discard top half
 }
 
 return -1;                   //not found
}

int myStrlen(char str[])
{
    int i = 0; 
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
void arrWrite(int* arr, int size, string fileName)
{
    fstream outFile;
    int line = 0;
    fileOpen(outFile, fileName, 'w');
    int i = 0;
    while(i < size)
    {
        outFile << arr[i] << " ";
        if(arr[i] < 10)
        {
            outFile << " ";
        }
        line++;
        i++;
        if(line % 15 == 0)
        {
            outFile << endl;
        }

    }
    outFile.close();
}
int myAtoi(char str[])
{
    int j = 1;
    int i = 0; 

    for(int f = myStrnlen(str) - 1; f >= 0; f--)
    {
        i = i + (str[i] - 48) * j;
        j = j * 10; 
    }
    return i;

}
int * arrLoad(int size, int limit)
{
    srand(time(NULL));
    int* arr = arrMake(size);
    int i = 0;
    while(i < size)
    {
        arr[i] = rand() % limit + 1;
        i++;
    }
    return arr;
}
int * arrMake(int size)
{
    int* newArr = new int[size];
    for(int i = 0; i < size; i++)
    {
        newArr(i) = i;
    }
    return newArr;
}


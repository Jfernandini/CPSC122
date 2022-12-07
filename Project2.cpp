/*Name: Julian Fernandini
Class: CPSC 122
Date Submitted: Septempber 16th, 2022
Assignment: Project 3
Description: Utilizes the myAtoi method in order to change charachters to ints 
and the Strnlen method to take the charachters except for null. 
Had issues with taking out null but went to teacher for help*/

#include <iostream>
#include <fstream>
using namespace std;

int myAtoi(char str[]);
int myStrnlen(char str[]);

int main(int argc, char* argv[])
{
    ofstream fin;
    fin.open(argv[3]);
    fin << myAtoi(argv[1]) * argc << endl;
    fin.close();

    return 0;
}
/* All digits need to be changed to an int. We do this by utilizing the myATOI method.
*/
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
//runs through all of the charachters except for null (\0)
int myStrnlen(char str[])
{
    int x = 0;

    while(str[x] != '\0'){
        x++;
    }
    return x;
}
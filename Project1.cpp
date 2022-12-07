/*
Name: Julian Fernandini
Class: CPSC 122
Date Submitted: Septempber 9th, 2022
Assignment: Project 1
Description: Generates an amount of prime numbes in an amount of colums specified by the user. 
Notes: Struggled with checking all of prime numbers past 11 so I went to the TA and he helped me put some finishing touches on it. 
*/

#include <iostream>
using namespace std; 
//Determines if value is prime or not
bool isPrime(int num)
{
bool prime = true; 
    for(int i = 2; i <= num/2; i++)
        if(num % i == 0)
        {
         prime = false;
        }
        return prime; 
}

void display(int, int);  //function prototype must be declared
                         //before use.  prototype includes
			 //return type, function name, parameters type(s)

//Argv takes the amount of prime numbers to be displayed, and the second value is in how many columns.
int main(int argc, char*argv[])
{
 int num, col; 
 num = atoi(argv[1]);
 col = atoi(argv[2]);

 display(num,col);
 cout << endl;

 return 0;
} 

void display(int nums, int cols)
{
 int ct = 1;
 int rowCt = 1;
 int max = 1;

//Changed from a for loop to a while loop to allow it to run infinitly. 
 while (ct <= nums)
  {
    max++;
    while(isPrime(max) == false)
    {
        max++;
    }
   cout << max << '\t';  //tab to next col 

   if (ct % cols == 0)  
    cout << endl;
   ct++;
  }
}


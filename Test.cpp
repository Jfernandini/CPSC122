#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;

//int fact(int num);
int exponent(int base, int exp);

int main()
{
  // int x = 5; 
  // int y = 3; 
  // int key = 1; 
  // for(int i = 0; i < y; i++)
  // {
  //   key *= x;
  // }
cout << exponent(5, 5) << endl;
  //fact(7);
 }

int exponent(int base, int exp)
{
  base = 1;
  for(int i = 0; i < exp; i++)
  {
    base *= i;
  }
  return base;
}
// int fact(int num)
// {
//  // int y;
//   //for(int x = 0; x <= num; x++)
//   //{
//     return num * fact(num - 1);
//  // }
// }


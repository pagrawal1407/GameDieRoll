#include <iostream>
#include "GameDie.h"

using namespace std;

int main()
{
  int n, rollnum;
  char ch = 'Y';

  cout << "Enter the number of faces of the Die: ";
  cin >> n;

  GameDie D (n);
  while (ch != 'N')
  {
     rollnum = D.roll();
     cout << endl << "Rolled number is: "<<rollnum << endl;
     cout << "Do you want to roll again? (Y/N): ";
     cin >> ch;
  }
   return 0;

}
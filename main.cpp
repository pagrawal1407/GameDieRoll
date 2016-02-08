#include <iostream>
#include "GameDie.h"

using namespace std;

int main()
{
  int n, rollnum;

  cout << "Enter the number of faces of the Die: ";
  cin >> n;

  GameDie D (n);
  rollnum = D.roll();
  cout << endl << "Rolled number is: " << rollnum;
return 0;
}

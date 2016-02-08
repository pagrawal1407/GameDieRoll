#include <iostream>
#include <GameDie.h>

int main()
{
  int n, rollnum;

  cout << "Enter the number of faces of the Die: ";
  cin >> n;

  GameDie D (n);
  rollnum = D.roll();
  return 0;
}

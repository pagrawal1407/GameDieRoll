#include <cstdlib>
#include <time.h>
#include "GameDie.h"
//class constructor that seeds the random number generator
GameDie::GameDie(int num)
{
   n = num;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
   int rollnum;

   srand(time(NULL));

   rollnum = rand()%n + 1;
   return rollnum;
}

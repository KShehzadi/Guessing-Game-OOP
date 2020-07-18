#include <iostream>
#include "guessinggame.h"
using namespace std;
int main()
{
  // ***********************************************************
  //         QUESTION NO 1                                 //
  //************************************************************
  /* COMPILE WITH THIS COMMAND ON COMMAND PROMPT
  g++ guessinggamedriver.cpp guessinggame.cpp player.cpp -o objectfile
  */
  char a[20], b[20], c[20];
  cout<< "enter player1 name:"<< endl;
  cin>> a;
  cout<< "enter player2 name:"<< endl;
  cin>> b;
  cout<< "enter player3 name:"<< endl;
  cin>> c;
  Player p1(a);
  Player p2(b);
  Player p3(c);
  GuessingGame g1(p1, p2, p3);
}

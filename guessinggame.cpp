#include <iostream>
#include <cstdlib>
#include "time.h"
#include "guessinggame.h"
using namespace std;
GuessingGame::GuessingGame()
{
  unsigned seed;
  Player p1((char*) "i");
  Player p2((char*) "my");
  Player p3((char*) "me");
  this->player1 = p1;
  this->player2 = p2;
  this->player3 = p3;
  int p;
  srand(seed);
  p = rand() % 10;
  srand(time(NULL));
  player1.a = rand() % 10;
  player2.a = rand() % 10;
  player3.a = rand() % 10;
  if(p == player1.a)
  {
    cout << player1.name << " wins!!" << endl;
    cout << "correct answer is "<< p<< endl;
  }
  else if(p == player2.a)
  {
    cout << player2.name << " wins!!" << endl;
    cout << "correct answer is "<< p<< endl;
  }
  else if(p == player3.a)
  {
    cout << player3.name << " wins!!" << endl;
    cout << "correct answer is "<< p<< endl;
  }
  else
  {
    cout << "all player loss"<< endl;
    cout << "correct answer is "<< p<< endl;
  }
}
GuessingGame::GuessingGame(Player p1, Player p2, Player p3)
{
  unsigned seed;
  this->player1 = p1;
  this->player2 = p2;
  this->player3 = p3;
  int p;
  srand(seed);
  p = rand() % 10;
  srand(time(NULL));
  player1.a = rand() % 10;
  player2.a = rand() % 10;
  player3.a = rand() % 10;
  if(p == player1.a)
  {
    cout << player1.name << " wins!!" << endl;
    cout << "correct answer is "<< p<< endl;
  }
  else if(p == player2.a)
  {
    cout << player2.name << " wins!!" << endl;
    cout << "correct answer is "<< p<< endl;
  }
  else if(p == player3.a)
  {
    cout << player3.name << " wins!!" << endl;
    cout << "correct answer is "<< p<< endl;
  }
  else
  {
    cout << "all player loss"<< endl;
    cout << "correct answer is "<< p<< endl;
  }
}
GuessingGame::~GuessingGame()
{
  delete[] player1.name;
  delete[] player2.name;
  delete[] player3.name;
}

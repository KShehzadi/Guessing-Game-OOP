#include <iostream>
#include "player.h"
Player::Player()
{
  name = new char[8];
  char *my = (char*)"unknown";
  for(int i = 0; i < 8; i++)
  {
    name[i] = my[i];
  }
}
Player::Player(char * n)
{
  int count = 0;
  for(int i = 0; n[count] != '\0'; i++)
  {
    count++;
  }
  name = new char[count + 1];
  for(int i = 0; i < count; i++)
  {
    name[i] = n[i];
  }
}
Player::~Player()
{
}

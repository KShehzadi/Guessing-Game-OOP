#include "resort.h"
Resort::Resort()
{
  name = new char[1];
  place = new char[1];
  name[0] = '\0';
  place[0] = '\0';
  a = 0;
  b = 0;
}
Resort::Resort(char * n, char * p)
{
  int count = 0;
  for(int i = 0; n[i] != '\0'; i++)
  {
    count++;
  }
  a = count;
  name = new char[count + 1];
  for(int i = 0; i < count; i++)
  {
    name[i] = n[i];
  }
  count = 0;
  for(int i = 0; p[i] != '\0'; i++)
  {
    count++;
  }
  b = count;
  place = new char[count + 1];
  for(int i = 0; i < count; i++)
  {
    place[i] = p[i];
  }
}
Resort& Resort::operator =(Resort r)
{
  delete[]this->name;
  delete[]this->place;
  this->name = new char[r.a + 1];
  for(int i = 0; i < r.a; i++)
  {
    this->name[i] = r.name[i];
  }
  this->place = new char[r.b + 1];
  for(int i = 0; i < r.a; i++)
  {
    this->place[i] = r.place[i];
  }
  return *this;
}
Resort::~Resort()
{
  delete [] name;
  delete [] place;
}

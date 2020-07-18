#include <iostream>
#include "person.h"

Person::Person()
{
  name = new char[1];
  name[0] = '\0';
  id = 0;
  a = 0;
}

Person::Person(char *name, int id)
{
  int count = 0;
  for(int i = 0; name[i] != '\0'; i++)
  {
    count++;
  }
  a = count;
  this->name = new char[count + 1];
  for(int i = 0; i < count; i++)
  {
    this->name[i] = name[i];
  }
  this->id = id;
}
Person& Person::operator =(Person & r)
{
  delete[]this->name;
  this->name = new char[r.a + 1];
  for(int i = 0; i < r.a; i++)
  {
    this->name[i] = r.name[i];
  }
  return *this;
}

Person::~Person()
{
  delete [] name;
}

#include "telenum.h"
telenum::telenum()
{
  contact = new char[1];
  contact[0] = '\0';
  a = 0;
}
telenum::telenum(char * c)
{
  int count = 0;
  for(int i = 0; c[i] != '\0'; i++)
  {
    count++;
  }
  a = count;
  contact = new char[count + 1];
  for(int i = 0; i < count; i++)
  {
    contact[i] = c[i];
  }
}
telenum& telenum::operator =(telenum t)
{
  delete[]this->contact;
  this->contact = new char[t.a + 1];
  for(int i = 0; i < t.a; i++)
  {
    this->contact[i] = t.contact[i];
  }
  return *this;
}
telenum& telenum::settelenum(char * c)
{
  delete[] this->contact;
  int count = 0;
  for(int i = 0; c[i] != '\0'; i++)
  {
    count++;
  }
  contact = new char[count + 1];
  for(int i = 0; i < count; i++)
  {
    contact[i] = c[i];
  }

}
telenum::~telenum()
{
  delete[] contact;
}

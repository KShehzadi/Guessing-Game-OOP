#include <iostream>
#include "cstring.h"
using namespace std;
CString::CString()
{
  str = new char[1];
  str = '\0';
  a = 0;
}
CString::CString(char *s)
{
  a = 0;
  int i = 0;
  while(s[i] != '\0')
  {
    a++;
    i++;
  }
  str = new char[a + 1];
  for(i = 0; i <= a; i++)
  {
    str[i] = s[i];
  }
}
bool CString::operator >(CString &k)
{
  if(k.a > this->a)
  {
    return false;
  }
  else if(k.a < this->a)
  {
    return true;
  }
  for(int i = 0; i < this->a; i++)
  {
    if(k.str[i] == '\0')
    {
      return true;
    }
    if(this->str[i] > k.str[i])
    {
      return true;
    }
    if(this->str[i] < k.str[i])
    {
      return false;
    }
  }
  return false;
}
bool CString::operator ==(CString &k)
{
  for(int i = 0; i < a; i++)
  {
    if(k.str[i] == '\0')
    {
      return false;
    }
    if(str[i] != k.str[i])
    {
      return false;
    }
  }
  return true;
}
CString::~CString()
{
  delete[] str;
}
void CString::prints()
{
  for(int i = 0; i <= a; i++)
  {
    cout<< str[i];
  }
}

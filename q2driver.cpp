#include "reservation.h"
#include <iostream>
using namespace std;
int main()
{
  //**************************************************
  //  QUESTION NUMBER 2 //
  //**************************************************


  /* compile with this command
  g++ q2driver.cpp resort.cpp cstring.cpp CDate.cpp person.cpp telenum.cpp reservation.cpp -o objectfile

  */
  int m, n, o;
  char a[30], b[50];
  cout<< "enter the resort name"<< endl;
  cin>> a;
  cout<< "enter the address of resort"<< endl;
  cin>> b;
  Resort r1(a, b);
  cout<< "enter your name:"<< endl;
  cin>> a;
  cout<< "enter your id card number"<< endl;
  cin>> m;
  Person p1(a, m);
  cout<< "enter your phone number:"<<endl;
  cin>> a;
  telenum t1(a);
  cout<< "enter date as dd mm yyyy"<< endl;
  cin>> m>> n>> o;
  CDate d1(m, n, o);
  Reservation ree(r1, p1, d1, t1);
}

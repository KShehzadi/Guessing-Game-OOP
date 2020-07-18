#include <iostream>
#include "reservation.h"
// NULL constructor
Reservation::Reservation()
{
  CDate d2;
  Person p2;
  Resort r2;
  telenum t2;
  date = d2;
  p1 = p2;
  r1 = r2;
  t1 = t2;
}
//parametric constructor
Reservation::Reservation(Resort r, Person p, CDate d, telenum t)
{
  r1 = r;
  p1 = p;
  date = d;
  t1 = t;
  std::cout << "your Reservation is confirmed !!";
}
// destructor 
Reservation::~Reservation()
{
}

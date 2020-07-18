#include "person.h"
#include "resort.h"
#include "CDate.h"
#include "telenum.h"
#include "cstring"
// Reservation class uses all classes via composition 
class Reservation
{
private:
  Resort r1;
  Person p1;
  CDate date;
  telenum t1;
public:
  Reservation();
  Reservation(Resort r, Person p, CDate d, telenum t);
  ~Reservation();

};

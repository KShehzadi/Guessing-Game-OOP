class Person
{
private:
  char *name;
  int id;
  int a;
public:
  Person();
  Person(char *name, int id);
  Person& operator =(Person & r);
  ~Person();
};

class telenum
{
private:
  char *contact;
  int a;
public:
  telenum();
  telenum(char * c);
  telenum& operator =(telenum t);
  telenum& settelenum(char * c);
  ~telenum();
};

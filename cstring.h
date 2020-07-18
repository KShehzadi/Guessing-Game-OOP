class CString
{
private:
  int a;
  char *str;
public:
  CString();
  CString(char *s);
  ~CString();
  bool operator >(CString &k);
  bool operator ==(CString &k);
  void prints();
};

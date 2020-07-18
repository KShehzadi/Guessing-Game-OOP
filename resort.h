class Resort
{
private:
  char * name;
  char * place;
  int a;
  int b;
public:
  Resort();
  Resort(char * n, char * p);
  Resort& operator =(Resort r);
  ~Resort();
};

#include <iostream>
using namespace std;

class callByValue
{
public:
  void print (int i)
  {
    cout << "value of int is " << i << endl;
    cout << endl;
  }

  void print (float f)
  {
    cout << "value of float is " << f << endl;
    cout << endl;
  }

  void print (char const c)
  {
    cout << "value of char is " << c << endl;
    cout << endl;
    cout << endl;
  }

};

class callByReference
{
public:

  void print (int &i)
  {
    cout << "value of int is " << i << endl;
    cout << endl;
  }

  void print (float &f)
  {
    cout << "value of float is " << f << endl;
    cout << endl;
  }

  void print (char const &c)
  {
    cout << "value of char is " << c << endl;
    cout << endl;
    cout << endl;
  }
};

class callByPointers
{
public:

  void print (int *i)
  {
    int dbks;
      dbks = *i;
      cout << "value of int is " << dbks << endl;
      cout << endl;
  }

  void print (float *f)
  {
    float dbks;
    dbks = *f;
    cout << "value of float is " << dbks << endl;
    cout << endl;
  }

  void print (char const *c)
  {
    cout << "value of char is " << c << endl;
    cout << endl;
    cout << endl;
  }
};

int
main ()
{
  int x = 10;
  float y = 0.31;
  char z = 'D';
  callByValue dbks;
  dbks.print (x);
  dbks.print (y);
  dbks.print (z);
  callByReference dbks1;
  dbks1.print (x);
  dbks1.print (y);
  dbks1.print (z);
  callByPointers dbks2;
  dbks2.print (&x);
  dbks2.print (&y);
  dbks2.print (&z);
  return 0;
}

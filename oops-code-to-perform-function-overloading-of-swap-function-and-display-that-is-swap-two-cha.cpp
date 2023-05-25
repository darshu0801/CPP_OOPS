#include<iostream>
using namespace std;
class dbks
{
public:
  void swap (int &a, int &b)
  {

    int temp;

      temp = a;

      a = b;

      b = temp;

  }
};
class dbks1
{
public:
  void swap (char &a, char &b)
  {

    char temp;

      temp = a;

      a = b;

      b = temp;

  }
};
class dbks2
{
public:
  void swap (string * str1, string * str2)
  {

    string temp = *str1;

     *str1 = *str2;

     *str2 = temp;

  }
};


int main ()
{
  dbks db;
  dbks1 db1;
  dbks2 db2;
  int ix, iy;

  char cx, cy;

  string str1, str2;


  cout << "Enter 2 integers:";

  cin >> ix >> iy;

  cout << "Enter 2 characters:";

  cin >> cx >> cy;

  cout << "Enter 2 character arrays:";

  cin >> str1 >> str2;

  cout << "Integers:" << endl;

  cout << "before swapping" << endl << "x=" << ix << endl << "y=" << iy <<
    endl;

  db.swap (ix, iy);

  cout << "After swapping" << endl;

  cout << "x=" << ix << endl << "y=" << iy << endl;

  cout << "Characters:" << endl;

  cout << "before swapping" << endl << "x=" << cx << endl << "y=" << cy <<
    endl;

  db1.swap (cx, cy);

  cout << "After swapping" << endl;

  cout << "x=" << cx << endl << "y=" << cy << endl;

  cout << "before swapping" << endl << "x=" << str1 << endl << "y=" << str2
    << endl;

  db2.swap (&str1, &str2);

  cout << "after swapping" << endl << "x=" << str1 << endl << "y=" << str2 <<
    endl;


  return 0;

}

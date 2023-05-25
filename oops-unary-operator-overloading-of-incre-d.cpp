#include<iostream>
using namespace std;

class Dbks
{
public:
  int x;
    Dbks ()
  {
    x = 10;
  }

  void printdbks ()
  {
    cout << "x value after operation is " << x << endl;
  }

  Dbks operator ++ ()
  {
    Dbks temp;          //ex for operation in 1 object and storing it in another
    temp.x = ++x;       //object and printing it(playing with 2 objects)
    return temp;
  }
  void operator ++ (int)
  {
    x++;
  }
  void operator -- ()
  {
    --x;
  }
  void operator -- (int)
  {
    x--;
  }
  void operator += (int)
  {
    x += 1;
  }
  void operator -= (int)
  {
    x -= 1;
  }
};

int
main ()
{
  Dbks db, db1;
  db1 = ++db;
  db.printdbks ();
  db++;
  db.printdbks ();
  db--;
  db.printdbks ();
  --db;
  db.printdbks ();
  db += 1;
  db.printdbks ();
  db -= 1;
  db.printdbks ();
  return 0;
}
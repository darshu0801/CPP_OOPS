#include <iostream>
using namespace std;

class multi
{
float x1, y1;
public:
friend multi operator*(multi &,multi &);
void getdata1 (int a, int b);
void display1 ();
};
multi operator*(multi &ob1,multi &ob2)
{

multi temp;

temp.x1 = ob1.x1 * ob2.x1;

temp.y1 = ob1.y1 * ob2.y1;

return temp;

}
void multi::getdata1 (int a, int b)
{

x1 = a;

y1 = b;

}
void multi::display1 ()
{

cout << "\ndivision of X:" << x1;

cout << "\ndivision of Y:" << y1;

}


int main ()
{

float x1, y1;

multi ob3, ob4, ob6;

ob3.getdata1 (20, 30);

ob4.getdata1 (10, 20);

ob6 = ob3 * ob4;

ob6.display1 ();
return 0;

}
#include <iostream>
using namespace std;

class sum 
{

public:
float x, y;
  
 
void getdata (int a, int b) 
  {
    
x = a;
    
y = b;
  
} 
sum operator+ (sum & ob) 
  {
    
sum temp;
    
temp.x = x - ob.x;
    
temp.y = y - ob.y;
    
return temp;
  
}
  
void display () 
  {
    
cout << "\nSum of X:" << x;
    
cout << "\nSum of Y:" << y;

} 
};


class multi 
{

public:
float x1, y1;
  
 
void getdata1 (int a, int b) 
  {
    
x1 = a;
    
y1 = b;
  
} 
multi operator* (multi & ob) 
  {
    
multi temp;
    
temp.x1 = x1 / ob.x1;
    
temp.y1 = y1 / ob.y1;
    
return temp;
  
}
  
void display1 () 
  {
    
cout << "\ndivision of X:" << x1;
    
cout << "\ndivision of Y:" << y1;

} 
};


int main () 
{
  
sum ob1, ob2, ob5;
  
multi ob3, ob4, ob6;
  
ob1.getdata (20, 30);
  
ob2.getdata (10, 20);
  
ob3.getdata1 (20, 30);
  
ob4.getdata1 (10, 20);
  
ob5 = ob1 + ob2;
  
ob5.display ();
  
ob6 = ob3 * ob4;
  
ob6.display1 ();

}

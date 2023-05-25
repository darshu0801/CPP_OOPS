#include<iostream>
using namespace std;
class Matrix
{
	public:
	int a[10][10];
	void input()
{
	int i,j;
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			cin>>a[i][j];
		}
	}
}
	void output()
{
	int i,j;
	for(i=0;i<=1;i++)
	{ 
		for(j=0;j<=1;j++)
		{
			cout<<a[i][j];
			cout << string( 1, ' ' );
		}
		cout<<endl; 

	}
}
	Matrix operator*(Matrix dbks1)
{ 
	Matrix dbks;
	int i,j,k;
    for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{ 
			dbks.a[i][j]=0;
			for(k=0;k<2;k++)
    	    {
    		    dbks.a[i][j]=dbks.a[i][j]+a[i][k]*dbks1.a[k][j];
    	    }
		}
		
    }
	return dbks; 
}
};


int main()
{ 
Matrix obj1, obj2;     // objects should take elements of matrix
Matrix obj3;
cout<<"Enter 1st matrix elements:";
obj1.input();
cout<<"Enter 2nd matrix elements:";
obj2.input();
obj3 = obj1 * obj2;
cout<<"matrix after multiplication:"<<endl;
obj3.output();
return 0;
}
#include <iostream>
using namespace std;

int a[10][10];
int i,j,temp;
int count = -1;
void input()
{
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		    cout<<"Enter row "<<i+1<<" column "<<j+1<<" element : ";
			cin>>a[i][j];
		}
		count+=1;
	}
}
void output()
{
    for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void transpose()
{
    for(i=0;i<=2;i++)
	{
		for(j=i+1;j<=2;j++)
		{
			if(i!=j)
			{
			    temp = a[i][j];
			    a[i][j]=a[j][i];
			    a[j][i]=temp;
			}
		}
	}
}
void flip()
{
    for(i=0;i<=2;i++)
	{
		{
		    temp = a[i][0];
		    a[i][0]=a[i][count];
		    a[i][count]=temp;
		}
	}
}
int main()
{
    input();
    cout<<"Your input"<<endl;
    output();
    transpose();
    cout<<"Transposed matrix"<<endl;
    output();
    flip();
    cout<<"90 degree rotated matrix"<<endl;
    output();
	return 0;
}
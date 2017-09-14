#include<iostream>
using namespace std;
int m,n,x[100][100],count=0;
void checkrow();
void checkcoloumn();
int main()
{
cout<<"enter the dimension of 2D matrix (m,n)"<<endl;
cout<<"m=";
cin>>m;
cout<<"n=";
cin>>n;
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
		{
			cout<<"enter X"<<i+1<<j+1<<" = ";
			cin>>x[i][j];
		}
cout<<endl;	
}
checkrow();
checkcoloumn();
cout<<"the number of islands of 1's are: "<<count<<endl;
return 0;
}
void checkrow()
{
for(int i=0;i<m;i++)
{
	for(int j=0;j<n-1;j++)
	{
		if((x[i][j]==1)&&(x[i][j+1]==1))
		{
			count++;
		}
	}
}
}
void checkcoloumn()
{
for(int i=0;i<m-1;i++)
{
	for(int j=0;j<n;j++)
	{
		if((x[i][j]==1)&&(x[i+1][j]==1))
		{
			count++;
		}
	}
}
}
/*
5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5 
*/
#include<iostream>
using namespace std;
int main()
{	
	int x,i,j;
	cin>>x;
	for(i=x;i>0;i--)
	{
		for(j=x;j>=i;j--)
		{
			cout<<j<<" ";
		}
		for(j=1;j<4*(i)-1;j++)
			cout<<" ";
		for(j=i;j<=x;j++)
			cout<<j<<" ";
		cout<<endl;
	}
	for(i=x;i>=0;i--)
		cout<<i<<" ";
	for(i=1;i<=x;i++)
		cout<<i<<" ";
	cout<<endl;
	for(i=1;i<=x;i++)
	{
		for(j=x;j>=i;j--)
		{
			cout<<j<<" ";
		}
		for(j=1;j<4*(i)-1;j++)
			cout<<" ";
		for(j=i;j<=x;j++)
			cout<<j<<" ";
		cout<<endl;
	}
	return 0;
}

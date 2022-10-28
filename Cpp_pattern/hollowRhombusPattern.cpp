//     *****
//    *   *
//   *   *
//  *   *
// *****
#include<iostream>
using namespace std;
int main()
{
	int x,i,j;
	cin>>x;
	for(i=0;i<x;i++)
	{
		for(j=0;j<(x-i-1);j++)
			cout<<" ";
		if(i==0|i==x-1)
		{
			for(j=0;j<(x);j++)
				cout<<"*";
		}
		else
		{
			cout<<"*";
			for(j=0;j<(x-2);j++)
				cout<<" ";
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

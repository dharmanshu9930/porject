<<<<<<< HEAD
# String Magnification
#### In this project, I create a class where I'll create patter of each character of string
=======
// project histogram
#include<iostream>
#include<iomanip>
using namespace std;

int max(int a[],int n)
{
	int m=a[0];
	for(int i=0;i<n-1;i++)
	{
		if(m<a[i+1])
			m=a[i+1];
	}
	return m;
}
void histogram(int a[],int n)
{
	int m=max(a,n),temp,count=0,flag=0;
	cout<<"Value:      Histogram"<<endl;
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==a[j])
			{
				count++;
				flag=1;
			}
		}
		if(flag==1)
		{
			cout<<setw(5)<<i;
			cout<<"    ";
			cout<<setw(5);
			for(int k=0;k<count;k++)
				cout<<'*'<<" ";
			cout<<endl;
		}
	flag=0;
	count=0;
	}
}
int main()
{
	int a[100],n;
	cout<<"ENter the size of the array:";
	cin>>n;
	cout<<"ENter the array:";
	for(int i=0;i<n;i++)
		cin>>a[i];
	histogram(a,n);
}

>>>>>>> 7e110e50a3a464cdeaab119f633fcd29ceee08c0

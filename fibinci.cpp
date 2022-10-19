#include<iostream>

using namespace std;

int main()
{
    //Fibonacci Series//
    int num1,num2,n;
    cout<<"Enter the number of terms of series: ";
    cin>>n;
    num1=0;
    num2=1;
    cout<<num1<<" "<<num2;

   for(int i=1; i<=n-2; i++)
   {
    int num3=num1+num2;
    num1=num2;
    num2=num3;
    cout<<" "<<num3;
   }
    return 0;
}

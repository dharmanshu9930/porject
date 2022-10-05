#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<" Enter Two Numbers \n";
    cin>>a>>b;
    cout<<" The Original Order is "<<a<<" and "<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<" After Swap Order Is "<<a<<" and "<<b;
}
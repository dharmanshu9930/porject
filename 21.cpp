#include<iostream>
using namespace std;
int main(){
    int n,digit,rev=0,n1;
    cin>>n;
    n1=n;
    while(n>0)
    {digit=n%10;
    rev=(rev*10)+digit;
    n=n/10;
    }
    if(rev==n1)
   { cout<<"it is a pallendrom";}
    else{
        cout<<"Number is not pallindrom";
    }
    return 0;
}
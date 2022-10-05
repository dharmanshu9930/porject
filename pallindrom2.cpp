#include <iostream>

using namespace std;                          //make a proper number reverser


int main()
{
    int n;
    cin>>n;
    int dig;
    int n1=n;
    int rev=0;

    while (n1>0)
    {
        dig=n1%10;
        n1/=10;
        rev=(rev*10)+dig;

    }

    if (n1==n)
    {
        cout<<"Number is a pallindrome.";
    }
    else
    {
        cout<<"Number is not a pallindrome.";
    }

    return 0;
}
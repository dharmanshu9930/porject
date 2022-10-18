//Sum of Square of first n natural number

#include<iostream>
using namespace std;
int main() {
    int i, n, sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i*i;
    }
    cout<<sum;
    return 0;
}
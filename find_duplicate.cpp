#include<iostream>
using namespace std;
int main(){
int n=6;
int a[n]={2,1,0,4,3,4};
for(int i=0;i<n;i++)
{
    int count=0;
    for(int j=i+1;j<n;j++)
    {
        if(a[i]==a[j] && i!=j)
        {
            cout<<"duplicate element: "<<a[i]<<endl;
            
        }
    }
}
return 0;
}
#include<iostream>
using namespace std;
int main() {
    
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<k;
        }
        for(l=i-1;l>=1;l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
   
}

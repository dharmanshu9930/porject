#include <iostream>

using namespace std;

int main()
{
    int n,r;
    cin>>n >>r;
    int a=n;
    int b=r;

    int prod=1;
    while (n>=1)
    {
        prod=prod*n;
        n--;
    }
    int nfact=prod;

    prod=1;
    while (a-b>=1)
    {
        prod=prod*(a-b);
        b++;

    }
    int nrfact=prod;

    prod=1;
    while (r>=1)
    {
        prod=prod*r;
        r--;
    }
    int rfact=prod;

    int nCr=(nfact)/(nrfact*rfact);

    cout<<nCr;

    return 0;
}
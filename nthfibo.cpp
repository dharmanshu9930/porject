#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;

    int a=1;
    int b=1;
    int c=0;

    int n=1;
    while (n<N)
    {
        c=a+b;
        a=b;
        b=c;

        n++;
    }

    cout<<a;

    return 0;
}
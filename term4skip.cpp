#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int i=0;
    int count=1;
    
    while (count<=x)
    {
        i++;
        int n=3*i+2;
        if (n%4==0)
        {
            continue;
        }
        cout<<n<<"  ";
        count++;
        
    }

    return 0;
}
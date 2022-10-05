/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"c:";
    cin>>c;
    cout<<"center: ("<<-a/2<<","<<-b/2<<")";
    
    cout<<"radius: "<<sqrt(pow(a/2,2)+pow(b/2,2)-c);
    return 0;
}


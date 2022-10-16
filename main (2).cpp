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
    float a,b,c,d;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"c:";
    cin>>c;
    cout<<"d:";
    cin>>d;
    cout<<"Distance between points ("<<a<<","<<b<<")"<<" and ("<<c<<","<<d<<") is: "<<sqrt(pow((c-a),2)+pow((b-d),2));
}


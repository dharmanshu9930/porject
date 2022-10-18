// Q3. Write a program to calculate volume of cone. 
// volume of cone is (V=πr^2h/3)
#include <iostream>

using namespace std;

int main()
{
    float r;
    float h;
    cout<<"value of r is : ";
    cin>>r;
    cout<<"value of h is : ";
    cin>>h;
    
    cout<<"volume of cone is : ";
    cout<<(3.14*r*r*h)/3;
    return 0;
    
}

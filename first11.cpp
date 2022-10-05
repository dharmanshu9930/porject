// ques 12
# include <iostream>
#include <math.h>
using namespace std;

int main()
{
    
 float a,b,c,p,q,r;
 cout<<"this is a program to check if line ax + by+c=0 intersect circle with center (p,q) and radius r\n";
 cout<<"enter p:";
 cin>>p; 
 cout<<"enter q:";
 cin>>q;
 cout<<"enter r:";
 cin>>r;
 cout<<"enter a:";
 cin>>a;
 cout<<"enter b:";
 cin>>b;
 cout<<"enter c:";
 cin>>c;

// let the foot of the perpendicular from center to the line be D
// let the center of the circle be O
 float O_D= (a*p +b*q + c)/sqrt(a*a + b*b);
 int count=0;
 float area;
 
 if(O_D>r) 
 {
    cout<<"line do not intersect the circle\n";
 }
 else 
 {
    cout<<"line intersect the circle\n";
    count++;
 }
// let the point of the intersection be A B 
 if(count==1)
 {
   float A_D = sqrt( r*r - O_D*O_D );
   float A_B = 2*A_D;
   area = (A_B*O_D)/2;    
   cout<<"area of the triangle is: "<<area;
 }
return 0;
}
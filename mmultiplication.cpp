#include <iostream>  
using namespace std;  
int main()  
{  
int a[3][3],b[3][3],mul[3][3],i,j,k;    
  
cout<<"enter the first matrix element=\n";    
for(i=0;i<=2;i++)    
{    
for(j=0;j<=2;j++)    
{    
cin>>a[i][j];  
}    
}    
cout<<"enter the second matrix element=\n";    
for(i=0;i<=2;i++)    
{    
for(j=0;j<=2;j++)    
{    
cin>>b[i][j];    
}    
}    
cout<<"multiply of the matrix=\n";    
for(i=0;i<=2;i++)    
{    
for(j=0;j<=2;j++)    
{    
mul[i][j]=0;    
for(k=0;k<=2;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}        
for(i=0;i<=2;i++)    
{    
for(j=0;j<=2;j++)    
{    
cout<<mul[i][j]<<" ";    
}    
cout<<"\n";    
}    
return 0;  
}
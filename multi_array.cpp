#include<iostream>
using namespace std;
int main(){
    int a[5]; 
    cout<<" Enter the value to be stored in list: ";
    for(int i=0;i<5;i++){
    cin>>a[i];
    }
    cout<<"\n";
    cout<<"The Values entered by you are please verify \n";
    for(int i=0;i<5;i++)
    {cout<<a[i]<<" ";
    }
    return 0;
}
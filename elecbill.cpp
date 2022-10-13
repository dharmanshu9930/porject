#include<iostream>
using namespace std;
int main(){
	int u;
	cout<<"Enter the units"<<endl;
	cin>>u;
	int cost;
	if (u<=100){
		cost = 0;
    }
    else if (u<=200){
    	cost = 0 + (u-100*5);

    }
    else if (u<=300){
    	cost = 0 + 100*5 + (u-200)*10;

    }
    else{
    	
    	cost = 0 +100*5+100*10+(u-300)*12;
    	
    }
    cout<<"Charges will be "<<cost<<endl;
    return 0;

}
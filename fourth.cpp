#include <iostream>
using namespace std;

int main(){
    int i,k;
    for(i=1;i<=5;i++){
        for(k=5-i+1;k>=1;k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}

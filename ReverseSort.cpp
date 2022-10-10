#include <iostream>
#include<algorithm>
using namespace std;
void reverse(int arr[],int i,int j){
while(i<=j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        reverse(arr,i,min);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
#include <iostream>
using namespace std;
int size=4;
int Q[]={};
int F=-1;
int R=-1;
void display(int Q[]){
    for (int i=0;i<size;i++){
        cout<<Q[i]<<"\t";
    }
}
void Enqueue_circular(int x){
    if(F== ((R+1)% size)){
        cout<<"overflow";
        return;
    }
    else if(F==-1){
        F=R=0;
    }
    else if(R ==(size-1)){
        R=0;
    }
    else{
        R++;
    }
    Q[R]=x;
}
void Dequeue_circular(){
    if(F==-1){
        cout<<"underflow";
        return;
    }
    else if(F==R){
        F=R-1;
    }
    else if(F==size-1){
        F=0;
    }
    else{
        F++;
    }
}
int main(){
Enqueue_circular(2);
Enqueue_circular(5);
Enqueue_circular(7);
Enqueue_circular(10);
Dequeue_circular();
Dequeue_circular();
Enqueue_circular(20);
Dequeue_circular();
Enqueue_circular(30);
Enqueue_circular(40);
// Enqueue_circular(50);
display(Q);

}

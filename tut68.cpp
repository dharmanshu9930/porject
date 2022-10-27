#include<iostream>
using namespace std;
template <class T >
class harry {
    public:
    T data;
    harry(T a){
        data = a;
    } 
    void display();
};

template <class T>
void harry<T> :: display(){
        cout<<data;
    }

 void func (int a){
     cout<<"I am first func() "<<a<<endl;
 }

template <class T>
 void func (T a){
     cout<<"I am templatised func() "<<a<<endl;
 }

 
template <class T>
 void func1 (T a){
     cout<<"I am templatised func() "<<a<<endl;
 }
int main(){
//harry<float> h(5.7);
//harry<char> h('f');
// cout<<h.data<<endl;
// h.display();

//func(4); //exact match takes the highest priority
func1(4); //exact match takes the highest priority

return 0;
}
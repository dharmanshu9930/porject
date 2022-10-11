#include<bits/stdc++.h>
using namespace std;
class Human{
    bool health;
    public:
    double height;
    double weight;
    int age;
    char *name;
    void sethealth(bool health)
    {
        this->health=health;
    }
    bool gethealth(){
        return health;
    }
    // Human(int a,double b){
    //     cout<<"constructor called"<<endl;
    //     age=a;
    //     height=b;
    //     // cout<<age<<" "<<height<<endl;
    // }
    Human(){
        name=new char[100];
    }
    // copy constructor
    // Human(Human& temp){
    //     this->age=temp.age;
    //     this->height=temp.height;
    // }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    void setAge(int age){
          this->age=age;
    }
    void setHeight(int height){
          this->height=height;
    }
    void print(){
        cout<<this->age<<" "<<this->height<<endl;
        cout<<this->name<<endl;
    }
};
int main(){


    // Human ritik;
    // ritik.health=false;
    // ritik.height=5.11;
    // ritik.weight=53;
    // ritik.setage(21);
    // cout<<ritik.getage();
    Human *a=new Human();
    char name[10]="Aniket";
    name[0]='N';
    a->setName(name);
    a->setAge(21);
    a->setHeight(5.11);
    a->print();
    
    
    Human i(*a);
    name[0]='A';
    i.setName(name);
    i.print();
    return 0;
}
#include<iostream>
using namespace std;

class ParentClass1{
    public:
    void display(){
        cout << "Parent Class 1" <<endl;
    }
};

class ParentClass2{
    public:
    void display1(){
        cout << "Parent Class 2" <<endl;
    }
};

class ChildClass : public ParentClass1, public ParentClass2{
    public:
    void display2(){
        cout << "Child Class" <<endl;
    }

};

int main(){
    ChildClass obj;
    obj.display(); //Child is inherting the parent class methods
    obj.display1();
    return 0;
}
#include<iostream>
using namespace std;

class ParentClass{
    public:
    void display(){
        cout << "Parent Class" <<endl;
    }
};

class ChildClass1 : public ParentClass{
    public:
    void display1(){
        cout << "Child Class 1" <<endl;
    }
};

class ChildClass2 : public ChildClass1{
    public:
    void display2(){
        cout << "Child Class 2" <<endl;
    }
};

int main(){
    ChildClass2 obj;
    obj.display();
    obj.display1();
    obj.display2();
    return 0;
}
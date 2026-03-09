#include<iostream>
using namespace std;

class ParentClass{
    public:
    void display(){
        cout << "Parent Class" <<endl;
    }
};

class ChildClass : public ParentClass{
    public:
    void display1(){
        cout << "Child Class" <<endl;
    }
};

int main(){
    ChildClass obj;
    obj.display(); //Child is inherting the parent class methods
    obj.display1();
    return 0;
}
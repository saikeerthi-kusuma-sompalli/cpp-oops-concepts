#include<iostream>
using namespace std;

class SimpleExample{
    public:
    void display(){
        cout << "Parent Class" <<endl;
    }
};

class DervivedExample1 : public SimpleExample{
    public:
    void display1(){
        cout << "Child Class 1" <<endl;
    }
};

class DervivedExample2 : public SimpleExample{
    public:
    void display2(){
        cout << "Child Class 2" <<endl;
    }
};

int main(){
    DervivedExample1 obj1;
    obj1.display(); //Child is inherting the parent class methods
    DervivedExample2 obj2;
    obj2.display();

    return 0;
}
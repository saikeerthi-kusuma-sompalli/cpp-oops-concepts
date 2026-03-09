#include<iostream>
using namespace std;

class SimpleExample{
    public:
    void display(){
        cout << "Parent Class" <<endl;
    }
};

class DervivedExample : public SimpleExample{
    public:
    void display1(){
        cout << "Child Class" <<endl;
    }
};

int main(){
    DervivedExample obj;
    obj.display(); //Child is inherting the parent class methods
    obj.display1();
    return 0;
}
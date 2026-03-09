#include<iostream>
using namespace std;

class VirtualBase{
    public:
    virtual void display(){
        cout << "I am in Base Class" <<endl;
    }
};

class DerivedClass: public VirtualBase{
    public:
    void display() override{ //OVVERIDE KEYWORD says this function MUST override a virtual function from the base class and it is recommened to use it in modern c++,c++11+
        cout << "I am in Derived Class" <<endl;
    }
};

int main(){
    VirtualBase* baseptr;
    DerivedClass obj;
    baseptr =&obj;
    baseptr -> display(); //This will call baseclass display function instead of dervived class display(), because pointer is of type baseclass, to avoid this we need to add virtual keyword to the display() in baseclass
}
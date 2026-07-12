#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "A's Constructor" << endl;
    }
    virtual  void getClassName()=0;
    virtual  void getClassName(string)=0;

    void display(){ 
        cout << "A's Funtion" << endl;
    }
   virtual ~A(){
        cout << "A's Destructor" << endl;
    }

};

void A::getClassName(){
    cout << "Class: ";
}
class B:public A{
    public:
    B(){
        cout << "B's Constructor" << endl;
    }
    void getClassName()override{
        A::getClassName();
        cout << "B" << endl;
    }
    void getClassName(string className)override{
        cout << "ClassName is: " << className << endl;
    }
    virtual ~B(){
        cout << "B's Destructor" << endl;
    }

};

int main(){
    // A obj; // Error: Object of Abstract Class A not allowed
    A* obja = new B();
    obja->getClassName();
    obja->getClassName("B");
    obja->display();
    delete obja; // (without Virtual keyword in destructor  we will get Warning: delete called on 'A' that is abstract but has non-virtual destructor 


}
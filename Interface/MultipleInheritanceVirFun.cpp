#include<iostream>
using namespace std;

class A{
    public:
    virtual void getClassName(){
        cout << "A" << endl;
    }
};

class B: public A{
    public:
    virtual void getClassName() override{
        cout << "B" << endl;
    }
    void display(){
        cout << "B's function" << endl;
    }
};

class C: public B{
    public:
    virtual void getClassName() override{
        cout << "C" << endl;
    }
};

int main(){
    A obja;
    obja.getClassName();
    B objb;
    objb.getClassName();
    obja = objb; // slicing ,Only A's functions in B were copied , Other functions of B were sliced away
    //obja.display(); // Error: Class A has NO member "display"
    A* obja1 = new B();
    obja1->getClassName();
    A* objC1 = new C();
    B* objC2 = new C();
    objC1->getClassName();
    objC2->getClassName();
}

#include<iostream>
using namespace std;


class A{
    public:
    string s = "A";
    A(){
        cout << "A's Constrcutor" << endl;
    }
    virtual void display(){
        cout << "A" << endl;
    }
    ~A(){
        cout << "A's Destructor" << endl;
    }
};

class B: public A{
    public:
    B(){
        cout << "B's Constrcutor" << endl;
        s = "B";
    }
    void display() override{
        cout << "B" << endl;
    }

    ~B(){
        cout << "B's Destructor" << endl;
    }
};

class C: public A{
    public:
    C(){
        cout << "C's Constrcutor" << endl;
       //s = "C";
    }
    void display() override{
        cout << "C" << endl;
    }
    ~C(){
        cout << "C's Destructor" << endl;
    }
};

class D: public B,public C{
    public:
    D(){
        cout << "D's Constrcutor" << endl;
    }
    /*void display(){
        cout << "D" << endl;
    }*/
    ~D(){
        cout << "D's Destructor" << endl;
    }
    /*void Getstring(){
        cout << s << endl; // Error: Non-static member "s" found in baseclass subobjects of type "A";
        }*/
};

int main(){
    A a;
    a.display();
    B b;
    b.display();
    a = b; // only A's part in B will be copied into a
    a.display();// A will be printed as object a is still the type A, and virtual keyword in A applies only for polymorphic access (base pointer or reference) not object to object assignment
    D d;
    //d.display(); // error: Member display found in multiple base-class of different types
    //d.Getstring();




}


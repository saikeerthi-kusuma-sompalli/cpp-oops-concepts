#include<iostream>
using namespace std;


class ClassA{
    protected:
    int a=50;
};

class ClassB: public ClassA{
    public:
    void display(){
        a = 1000;
        int x = a;
        cout << "Value of a is: " << x << endl;
    }

};

int main(){
    ClassB obj;
    obj.display();
    //obj.a=2000; // This will not work as a is the protected member of ClassA, we can use it in ClassB (as it is derived from ClassA, but it can't be used or modified in Main function as main is not the derived function of ClassA)
    //ClassA objA;
    //objA.a=100; // a instance of ClassA can't be accesed outisde the class as it is protected member of the class
}
#include<iostream>
using namespace std;

class Animal{
    public:
    Animal(){
        cout << "Animal's Constructor" << endl;
    }
    virtual void sound() = 0;
    virtual ~Animal(){
        cout << "Animal's Destructor" << endl;
    }

};
class Dog : public Animal{
    public:
    Dog(){
        cout << "Dog's Constructor" << endl;
    }
    void sound() override{
        cout << "Bark" << endl;
    }
    ~Dog(){
        cout << "Dog's Destructor" << endl;
    }
};
int main(){
    Animal* ptr = new Dog();
    ptr->sound();
    delete ptr;

}
#include<iostream>
using namespace std;

class DifferentWaysofObjcreation{
    public:
    int i;

    void display(){
        cout << "Hi there :)" << endl;
    }

};

int main(){
    DifferentWaysofObjcreation obj;
    obj.display(); // Automatic(stack) Object
    DifferentWaysofObjcreation* obj1 = new DifferentWaysofObjcreation();
    obj1->display(); // Dynamic (Heap) object
    delete obj1; //free Heap Memory
    obj1->display(); //  delete, free heap memory it will not erase pointer variable, after delete obj1 becomes dangling pointer 
    // Pointer still holds old address, program reads through invalid address
    // This is undefined behavior : it may work correctly, CRASH, or behave randomly
    // after delete ;obj1 = nullptr; 
    // to avoid Manual new/delete, use smart pointers
    
}
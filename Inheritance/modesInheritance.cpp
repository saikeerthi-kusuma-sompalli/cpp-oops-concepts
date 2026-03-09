#include<iostream>
using namespace std;

class SimpleExample{
    private:
    int x = 10;
    public:
    int y = 20;
    protected:
    int z;

};

class DervivedExample1 : public SimpleExample{
    public:
    void display(){
    DervivedExample1 obj;
    obj.z = 10; //OK: z is protected in SimpleExample
    obj.y = 20; //OK: y is public in SimpleExample
   // obj.x = 30; //Error: x is private in SimpleExample
    }
};

class DervivedExample2 : private SimpleExample{
    public:
    void display(){
        DervivedExample2 obj;   
        obj.z = 10; //OK: z is private in SimpleExample
        obj.y = 20; //OK: y is private in SimpleExample
   //     obj.x = 30; //Error: x is private in SimpleExample
    }
};

class DervivedExample3 : protected SimpleExample{
    public:
    void display(){
        DervivedExample3 obj;   
        obj.z = 10; //OK: z is protected in SimpleExample
        obj.y = 20; //OK: y is protected in SimpleExample
     //   obj.x = 30; //Error: x is private in SimpleExample
    }
};

int main(){

    DervivedExample1 obj;
    obj.display();
    DervivedExample2 obj1;
    obj1.display();
    DervivedExample3 obj2;
    obj2.display();
    return 0;
}
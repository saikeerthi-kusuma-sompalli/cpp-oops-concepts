#include<iostream>
using namespace std;

class SimpleExample{
    private:
    int x;
    public:
    int y;
    protected:
    int z;

};

class DervivedExample : public SimpleExample{
    public:
    void display(){
        DervivedExample obj;
        cout << obj.z << endl; //OK: z is protected in SimpleExample
    }
};

int main(){
    DervivedExample obj;
   //  obj.x = 10; //Error: x is private in SimpleExample
    obj.y = 20; //OK: y is public in SimpleExample
   // obj.z = 30; //Error: z is protected in SimpleExample
    obj.display();

}
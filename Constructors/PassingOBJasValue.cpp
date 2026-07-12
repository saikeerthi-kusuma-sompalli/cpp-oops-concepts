#include<iostream>
using namespace std;

class PassingOBJasValue{
    public:
    int temp;

    PassingOBJasValue(int objtemp){
        temp = objtemp;
    }

    void display(){
        cout << "Value of temp " << temp <<endl; 
    }
    void ChangeTempValue(PassingOBJasValue obj){
        obj.temp = 1000; 
};

int main(){
    PassingOBJasValue obj1(10);
    obj1.display(); // Output: Value of temp10
    PassingOBJasValue obj2 = obj1; // Copy constructor is called here
    obj2.display(); // Output: Value of temp10
    obj1.ChangeTempValue(obj1); // This will change the value of temp in the copy of the object, not in the original object
    obj1.display(); // Output: Value of temp10
    
}

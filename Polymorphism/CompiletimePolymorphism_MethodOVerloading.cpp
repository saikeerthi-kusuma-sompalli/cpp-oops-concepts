#include<iostream>
using namespace std;

class CompilerPolymorphism{

    public:
    int temp;
    double temp1;
    void display(){
        cout << "No parameters" <<endl;
    }
    void display(int value){
        temp = value;
        cout << "One parameter" <<endl;
    }
    void display(int value1,double value2){
        temp = value1;
        temp1 = value2;
        cout << "Multiple parameter" <<endl;
    }
    // Will Fail with Error, Can't overload functions with return type alone
    /* int display(int value1,double value2){
        temp = value1;
        temp1 = value2;
        cout << "Multiple parameter" <<endl;
        retrun tenp+temp1;
    }   */ 
    void display(double value2,int value1){
        temp = value1;
        temp1 = value2;
        cout << "Order of parameters" <<endl;
    }
};

int main(){
    CompilerPolymorphism obj;
    obj.display();
    obj.display(1); //signature:  No of Paramerters
    obj.display(1,1.2); //signature:  Type of Paramerters
    //obj.display(1,1); Fails with error: More than One instance of overload function matches the argument
    obj.display(1.1,1);//signature: order of Paramerters
}
#include<iostream>

class BasicConstructor{

    private:
    int x ;
    public:
    int a;
    BasicConstructor(){ //Default constructor
        a = 100;
    }
    BasicConstructor(int value){ //Parameterized constructor
        a = value;
    }   
    //For parameterized constructor we can use intializer list as well, which is better faster and recommended way to initialize the data members of the class
    BasicConstructor(int value1,int value2): a(value1),x(value2){}

    void display(){
        std::cout<<"Value of a is: "<<a<<std::endl;
        std::cout<<"Value of x is: "<<x<<std::endl; // This will work as diplay is a member function of the class and can use privayte members of class
    }
};

int main(){
    BasicConstructor obj;
    obj.display();
    //obj.x = 300; //This will through an error as X is priate member of the class and can't be accessed outside the class
    BasicConstructor obj2(30);
    obj2.display();
    BasicConstructor obj3(10,20);
    obj3.display();
}
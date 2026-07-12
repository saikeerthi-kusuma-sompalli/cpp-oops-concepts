#include<iostream>

class CopyConstructor{
    public:
    int temp= 10000;

    CopyConstructor(){
        temp =100;
    }
    //copy constructor
    CopyConstructor(const CopyConstructor &obj){ 
     //   temp =obj.temp;
    //    temp =2000;
    }
    void display(){
        std::cout << "values of tenmp is: " <<temp <<std::endl;
    }

};


int main(){
    CopyConstructor obj;
    obj.display();
    CopyConstructor obj2 = obj; //This will Call copy constructor and will copy the same values of obj to obj2
    obj2.display();
    obj.display(); //values of tenmp is: 100
    
}
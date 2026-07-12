#include<iostream>
using namespace std;

class Car{
    public:
    int name;
    void Model(){
        cout << "Generic Car" << endl;
    }
    virtual void speed(){
        cout << "Unlimited Horse power :)))))))" << endl;
    }
};

class Maruthi: public Car{
    public:
    void Model(){
        cout << "Maruthi Car" << endl;
    }
    void speed(){
        cout << "500 Kmph" << endl;
    }
     void Cost(){
        cout << "25,00,000" <<endl;
     }
};

class Mahendra: public Car{
    public:
    void Model(){
        cout << "Mahendra Car" << endl;
    }
    void speed(){
        cout << "1000 Kmph" << endl;
    }
     void Cost(){
        cout << "50,00,000" <<endl;
     }
};

int main(){
    Car obj;
    Maruthi obj1;
    obj = obj1;
    obj.speed(); // Think that we don't have speed finction in Car Class , so we will get Compilation Error : Base Class, Car has no member Speed
    // The compiler allows access only to members of the variable's static type (here, obj is of type Car, so only Car members are accessible)
    // Now I defined a Speed function within Car Class
    // Here compiler will execute Car's speed Function as we don't have Virtual keyword for speed

    Car* obj2 = new Maruthi();
    obj2->speed();
    //why we need override function here


}
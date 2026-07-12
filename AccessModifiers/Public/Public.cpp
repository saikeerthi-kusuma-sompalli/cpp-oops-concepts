#include "Public.h"
#include "DifferentClass.h"
#include<iostream>

    void A::print(){
        std::cout << "Hi I am in public Class"<< std::endl;
}

 void A::differentClassaccess(){
    DifferentClass b;
    b.print(); // Accessing a public member function (print()) of another class (DifferentClass)
    A a;
    a.print(); // Accessing a public member function (print()) of the same class (A)

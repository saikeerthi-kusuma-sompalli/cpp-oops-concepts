#include "ClassA.h"
#include<iostream>


void ClassA::print(){
        ClassA obj;
        std::cout << obj.a << std::endl; // Accessing private members, Variable a of same class , from Private member Print()
        std::cout << "I am in Private Member of ClassA"<< std::endl;
    }

void ClassA::display(){
        ClassA obj;
        std::cout << "I am in public Member of ClassA"<< std::endl; //Accessing private members, Variable a of same class, from public member display()
        std::cout << obj.a << std::endl;
    }



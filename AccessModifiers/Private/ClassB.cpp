#include "ClassA.h"
#include "ClassB.h"

#include <iostream>

void ClassB::display(){
    std::cout << "I am in ClassB Public function" << std::endl;
    ClassA obj;
    obj.display(); 
    // Cannot directly access private members of ClassA from ClassB
    // However, a public member function of ClassA (display()) can be called , which is internally accessing ClassA's private members
}


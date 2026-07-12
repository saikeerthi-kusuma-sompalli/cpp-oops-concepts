//#include<iostream>
#include "Public.h"
#include "DifferentClass.h"
#include<iostream>

int main(){
    A a;

    a.print();
    std::cout << a.a;
    a.differentClassaccess(); //Accessing a public member of class A from the outside world , (main() is a non-member function)
}


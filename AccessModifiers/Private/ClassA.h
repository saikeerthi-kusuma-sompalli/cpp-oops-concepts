#ifndef CLASS_A_H
#define CLASS_A_H
#include <string>

class ClassA{
    private:
    std::string a = "ClassAPrivateMember";
    void print();

    public:
    void display();
};


#endif
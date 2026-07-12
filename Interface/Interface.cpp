#include <iostream>
using namespace std;


class Idevice{
    public:
    virtual void turnon() = 0; //Pure Virtual Function
    // Any Class that wants to be a Idevice must provide its own turnon() Implementation
    virtual void turnon() = 0;


    virtual ~Idevice(){}

};
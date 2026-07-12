#include<iostream>
using namespace std;


int main(){
    float float_temp = 100.4567;
    int int_temp;
    int_temp = float_temp;
    cout << "Type casting with Assignment (Implicity conversion) " << int_temp <<endl; // Type casting with Assignment 100
    int int_temp2;
    int_temp2 = static_cast<int>(float_temp);
    cout << "Type casting with explicit conversion(static_cast) " <<int_temp2 <<endl; //Type casting with explicity conversion(static_cast)100

}


// Both Assigment conversion (Implicit Conversion) and Explicit Cnversion gives the same output
// Difference: 
/*
Assigment Conversion:
* compiler does the automatic conversion (Will happen silently so data loss is obvious)
Explicit Conversion with static_cast:
* Synatx: static_cast<new_type>(exp)
* we are telling compiler "Yes we intentionally want this conversion"
* same result like assignment conversion but code is clearer and safe style in c++
* Easier to spot during review/debugging

*/
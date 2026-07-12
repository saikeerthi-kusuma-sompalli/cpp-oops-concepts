#include<iostream>
using namespace std;


class ConversionConstructor{

    public:
    int temp1 = 100;
    int temp2 = 1000;
    int temp3;
    ConversionConstructor(int value1,int value2){
        temp1 = value1;
        temp2 = value2;
    }
    ConversionConstructor(int value=0):temp3(value){
        cout << "Hi there I am ConversionConstructor's constructor " <<endl;
    }
    void display(){
        cout << "TMP3 Value after conversion through constructor conversion: " << temp3<< endl;
    }
    ConversionConstructor(const ConversionConstructor&){
        cout << "ConversionConstructor's copy constructor "<<endl;
    }
    ~ConversionConstructor(){
        cout << "ConversionConstructor's Destrcutor "<<endl;
    }

};

class ConversionConstructor2{
    int temp4;
    ConversionConstructor2(int value=0):temp4(value){
        cout << "Hi there I am ConversionConstructor2's constructor " <<endl;
    }
};

void func(ConversionConstructor){
    cout << "I am function which has ConversionConstructor as parameter " <<endl;
}

void func(ConversionConstructor2){
    cout << "I am function which has ConversionConstructor2 as parameter " <<endl;
}

int main(){

    // Create an object using the single-argument constructor.
    ConversionConstructor obj1(99);
    cout << "Creation of object with values: " << obj1.temp3 << endl;
    // Once the object exists, a new value can be assigned to it.
    obj1 = 100;
    cout << "Implicit conversion from int to Object: ConversionConstructor with implicit conversion " << obj1.temp3 << endl;
    // Above, the compiler automatically converts int to ConversionConstructor.
    // static_cast can be used to make that conversion explicit.
    // obj1 = static_cast<int>(100); would be pointless because 100 is already an int.
    // The compiler would still need an implicit conversion from int to ConversionConstructor afterward.
    obj1 = static_cast<ConversionConstructor>(5); // This is correct explicit conversion
    // Or: obj1 = ConversionConstructor(100);
    obj1.display();
    cout << "Implicit conversion from int to Object: ConversionConstructor with explicit conversion " << obj1.temp3 << endl;
    // A single-argument constructor can also allow unintended conversions.
    obj1 = 'a';
    cout << "Implicit conversion from char to Object: ConversionConstructor " << obj1.temp3 << endl;

    // Using the explicit keyword on the constructor prevents implicit conversions.
    // explicit ConversionConstructor(int value=0):temp3(value){}
    // Then obj1 = 100; would fail, and you would need:
    // obj1 = static_cast<ConversionConstructor>(100); or obj1 = ConversionConstructor(100);
    // 
    // Rule of thumb: use explicit for most single-argument constructors unless implicit conversion is truly intended.

    // Create an object using the two-argument constructor.
    ConversionConstructor obj(5,55);
    cout << obj.temp1 << " " << obj.temp2 <<endl;

    // Assignment like obj2 = (10,190) does not call the two-argument constructor.
    // This uses the comma operator, so the expression becomes 190.
    // explicit mainly matters for constructors that can be called with one argument.
    ConversionConstructor obj2;
    obj2 = (10,190);
    cout << obj2.temp3 << endl; 

    // The compiler cannot implicitly use a multi-argument constructor unless the remaining parameters have default values.
    obj2 = ConversionConstructor(23,24);

    cout <<"Direct call to the two-argument constructor "<< obj2.temp1 << " " << obj2.temp2 <<endl;

    /*Conversion Constructor
    Normal Constrcutor: Used to intialise objects
    Conversion Constrcutor: Used to convert the primitive data types to class objects

    Disadvantages of conversion Constructor:

    Compiler automatically creates objects, sometimes it is dangerous and unexpected
    Unexpected conversions (Account acc= 1000) -> Did we assign the balance?/ did we convert?//did constructor run?
    Function overloading ambiguity 
    Performance Overhead


    C++ overload resolution prefers:
    Exact match
    Standard conversion
    User-defined conversion (constructors/operators)


    */ 

   //func('a'); // error: call to 'func' is ambiguous , as compiler has multiple valid ways to convert argument

   // 
}

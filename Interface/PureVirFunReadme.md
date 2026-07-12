## Pure Virtual Function

- Pure virtual function is a virtual function that has no implementation in the base class and forces dervied classes to provide their own implementation

- Pure virtual function are used to create interfaces and abstract designs in c++

- template

- If a Class contains even one pure virtual function, it becomes an abstract class and we can't create objects of that class

- As we can't create objects for Abstract classes, we can create pointers and references

- Derived classes that implement all pure virtual functions become concrete classes 

- we can achieve Runtime Polymorphism with Pure Virtual function(Biggest usecase is dynamic dispatch)

- In declaration like virtual void GetClassName() = 0;
Here =0 tells compiler: "This function is a pure virtual function.Base class is not providing the complete implementation, and derived class are expected to provide their own implementation"

- "Without =0, the compiler will throw a linker error saying missing vtable. For all virtual functions, the compiler creates a vtable. While creating the vtable, the linker searches for each function's definition. The vtable will contain the address of the function definition in the text segment. If no definition exists, the linker cannot complete the vtable, so it throws a linker error: missing vtable"

- Whenever we have a polymorphic base class (abstract or not), always make the destructor virtual

- Can Pure virtual function can have definiton - YES
Check code : PureVirtualFunctions.cpp

Pure virtual function with defintion Means: Derived class must override this function, but they can still reuse soke common base implementation

But what is the purpose of this, I can have a Normal virtual function with defintion right?

## Normal Virtual Function vs Pure Virtual Function

| Feature | Normal Virtual Function | Pure Virtual Function |
| --- | --- | --- |
| Base class type | Base class is not abstract | Base class is abstract |
| Base class objects | We can create base class objects | We cannot create objects of the base class |
| Override requirement | Derived classes may override virtual functions, but they are not forced to | Every derived class must override pure virtual functions to become concrete |


Normal Function: you can override the function
Pure Virtual function: you must override the function

- Pure virtual destructor
Destructor can also be a pure virtual (it should have a definition)

- Constructors can't make constructor a pure virtual in C++(only virtual member functions including destructor) can be pure virtual

virtual function call requires an object to already exists because it uses the oebjects's vptr to lookup the function in the vtable, Constructor's job is to create and intialize the object and set up the vptr, so if e create a virtual constructor would create a circular problem:

to Call constructor virtually: we need a  objects's vtpr
But vtpr exists only after constructor starts creating the object

Virtual disptach requires an already constructed object. constructors create object, so they cannot participate in virtual disptach.

- Multiple Pure virtual functions

Any derived class must implement all of them

- What happens if derived class does not implement pure virtual functions?

Error: unimplemented pure virtual method

- interfaces

C++ does not have any separate interface keyword like java
A class containing only pure virtual functions is often used as interface

Pure virtual functions class defines what a object type can do,and derived claases define how it does it














virtual Functions:

Enable Runtime polymorphism (decides which function to Call at runtime)
Helps us to override methods in subclasses
Introduces Dynamic Dispatch(Mechanism by which C++ decides at runtime which overriden virtual function to call based on the actual type of the object not the type of the pointer or reference) -> Foundation for runtime Polymorphism  -  RUNTIME SELECTION OF FUNCTION IS CALLED DYNAMIC DISPATCH

Static Dispatch and Dynamic dispatch:


## Virtual Functions

Virtual functions:

- Enable runtime polymorphism, meaning C++ decides at runtime which function to call.
- Allow methods to be overridden in derived classes.
- Introduces Dynamic Dispatch(Mechanism by which C++ decides at runtime which overriden virtual function to call based on the actual type of the object not the type of the pointer or reference) -> Foundation for runtime Polymorphism  -  RUNTIME SELECTION OF FUNCTION IS CALLED DYNAMIC DISPATCH


## Static Dispatch vs Dynamic Dispatch

| Aspect | Static Dispatch | Dynamic Dispatch |
|---|---|---|
| Selection time | Compile time | Runtime |
| Function type | Normal (non-virtual) functions | Virtual functions |
| Decision basis | Pointer/reference type | Actual object type |
| Performance | Faster (direct calls) | Slight overhead (vptr -> vtable lookup) |

## How Does C++ Implement Virtual Functions Internally

Most Compilers use two hidden Mechanisms

Virtual Pointer(vptr)
- Every object of a class containing virtual functions usually store a hidden pointer called vptr

Virtual Table (Vtable)
- Compiler creates a table containing address of virtual functions

Process:
Example: Animal* animal = new Dog();
animal->speak();

ptr
|
object
|
vptr
|
vtable
|
function address

## Rules for Virtual Function:

- it works with pointers and reference
Pointers -> Animal* animal = new Dog(); animal->speak();
Reference -> Dog d; Animal& animal = d; animal.speak();

- Objects don't use polymorphism
Example: Dog d; Animal animal = d; // There slicing will happen 
Only Animal option of Dog is copied, other Dog part was sliced away

## Function overrides

a derived class can override virtual finction in parent/base class

## override keyword

Override Keyword tells compiler that, This function should override base class's virtual function

## Pure Virtual function

## Virtual destructor 

## Virtual functions in constructor and Destructor

## Can Virtual functions be private 

YES

## Can static functions be virtual
NO

- virtual functions work on objects using VPTR(Virtual pointer)
- Static functions belong ot the class, not objects

## Performance Cost of virtual functions
- Memory Overhead
Each object usually contains a hidden vtpr

- Performance overhead
Function calls need extra indirection
object -> vptr -> vtable -> function

This cost is small compared to the flexibility gained, but we have to avoid it when each CPU cycle matters like in embedded systems

## Multiple Inheritance and virtual functions

Subclass's objects contains multiple vptrs, one for each baseclass subobject

## Covariant return type:
a derived virtual function can retrun a more specific pointer / reference

## Final keyword

prevent further overriding

## Pure virtual function destructor










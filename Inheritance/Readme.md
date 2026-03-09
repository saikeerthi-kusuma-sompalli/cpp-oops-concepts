Inheritance:

1.Is is Fundamental Concept of OOPs(Object oriented programming), OOPs is based on thinking about software system like how we think about day to day systems, OOPs allows us to perform hierarchies of categorization

2.  Inheritance is like hieracry of represntation that allows us to share memebers with specific categorization,It is the Mechanishm in which one class can inherit Members(Attributes(properties) & Methods(behaviour)) of other Class(Like a parent(Parent Class)->Child(SubClass) Relationship)

3. Parent Class is a Generization and Child Class is specification

4. Parent Class will always have the highest level abstraction
5. If No Public constructor we can't create a child class

------------------------------------------------------------------------

Example:

Animal: Eat and sleep
Dog: Can Bark

Here instead of wriritng everything dog inherits from Animal
------------------------------------------------------------------------

Types of Inheritance:

1. Single Inheritance (One parent ->One Child)
2. Multilevel inheritance(Chain of inheritance A(Parent Class) -> B -> C)
3. Multi Inheritance (One class inherits from Multiple Class A -> C <- B)
4. Hierachical Inheritance (one parent -> Many Child classes)
5. Hybrid Inheritance (combination of multiple inheritnace types)

------------------------------------------------------------------------

Access Specifiers in Inheritance:

1. private Members(In Parent Class) can't be accessed in child Class, but public and Protected Members are accesible in child classes

------------------------------------------------------------------------

Modes in Inheritance:

1. public (Class B : public A)
2. private (Class B : private A)
3. protected (Class B : protected A)

| Parent    | Public Inheritance | Protected      | Private        |
| --------- | ------------------ | -------------- | -------------- |
| public    | public             | protected      | private        |
| protected | protected          | protected      | private        |
| private   | not accessible     | not accessible | not accessible |

------------------------------------------------------------------------

Constructor order in Inheritance (Constructor Chaining)

1. When we create a chilc class someone has to intialize the attributes that comes from parent class
-----> we can intailize it (by creating a constructor, but in big codes it is not possibe to know all the attributes), but parent class constructor defienetly knows how to inatialize them 

2. when we create an object of child class before constructing itself, it will call the default constructor of the parent Class

------------------------------------------------------------------------

Function Overriding

1. Child class redefines parent function (Parent function is overridden)

Virtual functions(Runtime Polymorphism)

------------------------------------------------------------------------
 Diamond pattern problem (Occurs in multiple inheritance)

A is parent Class, B and C are Child Classes of A , and D is the child class of B & C,So D gets two copies of A
------------------------------------------------------------------------

Advantages:

ReUsability
Code Organization (better structure)
Extendability (we can add new code without modifiying old class)
Supports polymorphism
Better abstraction

------------------------------------------------------------------------
Disadvantages:

Tight coupling (when two classes/Modules heavy depends on each other's internal detail,if one chnages the other must also change)
Hard debugging in higher hierachies
Diamond Problem in mulitple inheritances



















Protected:

Accessible inside the same Class
accessible inside Child Classes(Derived Classes)
Not accessible directly outside the class
------------------------------------------------------------------------------------------------
Why not Public?
with protected we can achieve Encapsulation (only Child Access will have access to the protected members/methods)
------------------------------------------------------------------------------------------------

Private vs Protected
Child Classes Can't access private members 
To stop direct object creation of a base class/Parent Class while still allowing derived classes to inherit and construct it
------------------------------------------------------------------------------------------------

Protected:
same Class -> Yes
Subclass -> Yes (same/different Namespace/project) -> Protected depends on inheritance not based on namespace/project
------------------------------------------------------------------------------------------------

Singleton /Factory Design Pattern
------------------------------------------------------------------------------------------------

Advanced Example:
class Shape {
protected:
    Shape() {}

public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing circle";
    }
};
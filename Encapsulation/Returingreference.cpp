#include<iostream>
using namespace std;


class Circle{
    private:
    double radius;

    public:
    Circle():radius(0){}

    double getRadius1(){
        return radius+ 3.14;
    }

    double getRadius2() const{
        // radius = radius + 10; // Error: Cannot assign to non-static data member within const member function "getradius2"
        return radius; // if we return "radius + 10", this only calculates a temporary value using radius and returns it, actual member variable stays unchanged
    }

    double& getRadius3(){
        return radius;
    } 
    double& getRadius4() const{ // Error: Binding reference of type double to value of type double const ,drops const qualifier
        return radius;
    } 
    // getRadius4() const means object is treated as read-only inside that function, so inside function, radius is treated like a const double

};

int main(){
    Circle obj;
    cout << obj.getRadius1() << endl;
    cout << obj.getRadius2() << endl;
    cout << obj.getRadius3() << endl;
    double& radius = obj.getRadius3(); // Encapsulation fails here, point of encapsulation is not just to make data private. The real point is to control access to that data
    radius = radius + 100;
    cout << obj.getRadius3() << endl;

}
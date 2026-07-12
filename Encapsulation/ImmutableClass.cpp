#include<iostream>
using namespace std;

class Circle{

    private:
    const double radius;

    public:
    Circle(double r):radius(r){}

    double getRadius() const{
        return radius;
    }
};

int main(){
    Circle obj(34.5);
    cout << obj.getRadius()<< endl;
}
#include<iostream>
using namespace std;


class ReadOnlyObj{
    private:
    int age;

    public:
    ReadOnlyObj():age(0){}
    
    int getAge() const{
        // age = 10; Error: Can't assign to non-static data member within const member function
        return age;
    }

    void setAge(int val){
        if (age >= 0){
            age += val;
        }
    }

    const int& getAge1() const{
        return age;
    }

};


int main(){
    ReadOnlyObj obj;
    cout << obj.getAge() << endl;
    obj.setAge(23);
    cout << obj.getAge() << endl;
    //cout << obj.age; Error Const::age is Inaccessible (private Member)

    //Read-only objects Concept
    const ReadOnlyObj constObj;
    cout << constObj.getAge() << endl; // without int getAge() const, we will get Error: this argument to member "getAge" has type const ReadOnlyObj, but function is not marked as const
    cout << constObj.getAge1() << endl;

}
#include<iostream>

namespace outerNamespace{
    namespace V1{
        int add (int a, int b){
            return a+b;
        }
    }
    inline namespace v2{
        int add (int a, int b){
            std::cout << a+b << std::endl;
            return a+b;
        }
    }
}

int main(){
    std::cout << outerNamespace::add(1,2);
}
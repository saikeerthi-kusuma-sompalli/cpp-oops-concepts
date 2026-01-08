#include<iostream>

namespace outspace{
    int x = 100;
    namespace innerspace1{
        int y = 101;
        namespace innerspace2{

            int z = 102;
        }
    }
}

int main(){
    std::cout << outspace::x << std::endl;
    std::cout << outspace::innerspace1::y << std::endl;
    std::cout << outspace::innerspace1::innerspace2::z << std::endl;
}
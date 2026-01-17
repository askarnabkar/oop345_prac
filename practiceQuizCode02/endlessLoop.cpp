#include <iostream>

int main() {
    unsigned char x = 0;
    unsigned char y = 150;

    std::cout << "Entering the loop" << std::endl;
    for(; x<=2*y; x++){
        std::cout << "x in the loop: " << (int)x << std::endl;
    }
    std::cout << "Came out of the loop" << std::endl;
    std::cout << "Final value of x: " << (int)x << std::endl;
    
    return 0;
}

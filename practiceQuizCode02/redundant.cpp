#include <iostream>

int main(){

    int n0 = 7;
    int n1 = 7.2;
    int n2 {6};
    //int n3 = {7.5}; // = IS REDUNDANT HERE, THE TYPE IS ALREADY DEFINED AS INT AND THE {} MUST CHECK FOR THE EXACT TYPE
                    // SO IT WILL NOT CONVERT 7.5 TO 7, IT WILL THROW AN ERROR


    std::cout << "n0 = " << n0 << std::endl;
    std::cout << "n1 = " << n1 << std::endl;
    std::cout << "n2 = " << n2 << std::endl;
    //std::cout << "n3 = " << n3 << std::endl;
}
#include <iostream>

int genRandomNumber(){
    std::srand((unsigned) time(0));
    int randomNumber{0};
    int max{99999};
    int min{10000};
    int range{max - min};
    int count{0};
    while(randomNumber != 69420) {
        randomNumber = (std::rand() % range + min);
        count++;
        std::cout << randomNumber << std::endl;
    }

    std::cout << "Iterations: " << count << std::endl;
    return randomNumber;    
}    
    
int main() {
    genRandomNumber();
}

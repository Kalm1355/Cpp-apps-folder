#include <iostream>

int main(){

    int birthYear;
    int currentYear;

    std::cout << "What's your birth year? " << std::endl;
    std::cin >> birthYear;

    std::cout << "What's the current year? " << std::endl;
    std::cin >> currentYear;

    int age = currentYear - birthYear;

    if(age >= 18){
        std::cout << "You are an adult" << std::endl;
    }else{
        std::cout << "You are still underage" << std::endl;
    }

    return 0;
}

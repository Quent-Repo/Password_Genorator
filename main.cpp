#include <iostream>
#include <random>
#include <vector>
#include <string>
//#include "numbers.h"

std::string Words[16] = {"ranked", "tasked", "leash", "putty", "picket", "compact",
                         "nail", "donkey", "pains", "grammar", "Terminator", "Slicer",
                         "Ninja", "cow", "Robot", "little"};
std::vector<std::string> hold{};
int Word_Amount = 0;
int Number_Amount = 0;
std::random_device rd;

int main() {


    std::cout << "\nHow Many words do you want this to be: \n";
    std::cin >> Word_Amount;
    std::cout << "How Many Numbers do you want \n";
    std::cin >> Number_Amount;

    for (int r = 0; r < Word_Amount; r++) {
        int Y = rd() % 15;
        hold.push_back(Words[Y]);
    }
    for (int r = 0; r < Number_Amount; r++) {
        int Y = rd() % 10;
        hold.push_back(std::to_string(Y));
    }
    std::cout << "Hold size is : "<< hold.size() << "\n";
    for (auto i : hold){
        std::cout << i;
    }
}


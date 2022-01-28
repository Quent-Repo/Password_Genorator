#include <iostream>
#include <random>
#include <vector>
#include <string>
//#include "numbers.h"

std::string Words[16] = {"ranked", "tasked", "leash", "putty", "picket", "compact",
                         "nail", "donkey", "pains", "grammar", "Terminator", "Slicer",
                         "Ninja", "cow", "Robot", "littlegirl"};
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
        int Y = rd() % 16;
        hold.push_back(Words[Y]);
    }
    for (int r = 0; r < Number_Amount; r++) {
        int Y = rd() % 10;
        hold.push_back(std::to_string(Y));
    }
    std::cout << "Hold size is : "<< hold.size() << "\n";
//int strLen=(hold.size());
//std::cout << strLen << " " << "\n";
    for(int r = 0;r < hold.size();r++){
        std::cout << hold.at(r) /*<< ' '*/;

    }
    main();
}


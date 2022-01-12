#include <iostream>
#include <math.h>
#include <time.h>
#include <vector>
#include <string>

int main() {
    std::string Words[6] = {"Test", "Life", "Work", "God", "Dog", "Hope"};

    /*
    Why Am I Making An Array from 0-9 when you already have a random from 0-9 it does the same fucking thing.
    std::string Numbers[10]= {"0","1","2","3","4","5","6","7","8","9"};
    */

    std::vector<std::string> hold{};
    int Word_Amount = 0;
    int Number_Amount = 0;


    srand(time(NULL));


    std::cout << "\nHow Many words do you want this to be: \n";
    std::cin >> Word_Amount;
    std::cout << "How Many Numbers do you want \n";
    std::cin >> Number_Amount;

    for (int r = 0; r < Word_Amount; r++) {
        int Y = rand() % 5;
        hold.push_back(Words[Y]);
    }
    for (int r = 0; r < Number_Amount; r++) {
        int Y = rand() % 10;
        hold.push_back(std::to_string(Y));
    }
    std::cout << "Hold size is : "<< hold.size() << "\n";
    for(int r = 0;r < hold.size();r++){
    std::cout << hold.at(r) /*<< ' '*/;
    }
    }


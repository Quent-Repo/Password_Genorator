#include <iostream>
#include <math.h>
#include <time.h>

int main() {
    std::string Words[6]= {"Test", "Life", "Work", "God","Dog", "Hope"};
    std::string Numbers[10]= {"0","1","2","3","4","5","6","7","8","9"};
    int Word_Amount = 0;
    int Number_Amount = 0;


    srand(time(NULL));


    std::cout << "\nHow Many words do you want this to be: \n";
    std::cin >> Word_Amount;
    std::cout << "How Many Numbers do you want \n";
    std::cin >> Number_Amount;
    //std::cout << Word_Amount << "\n" << Number_Amount << "\n";
    int Total = Word_Amount+Number_Amount;

    for(int x = 1; x <= Total; x++){
        int Picker = (rand() % 2);
        std::cout << " !" << Picker << "! ";
        if (Picker == 0) {
            for (int x = 1; x <= Number_Amount; x++) {
                int Y = rand() % 10;
                std::cout << Numbers[Y];
            }
        } else {
            for (int x = 1; x <= Word_Amount; x++) {
                int Y = rand() % 6;
                std::cout << Words[Y];
            }

        }
    }
    //std::cout << "\n " << Total << "\n";
main();
}

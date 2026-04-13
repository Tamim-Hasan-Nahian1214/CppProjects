#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int input;
    srand(time(0));
    int random = rand() % 99 + 1;
    int attempts = 0;
    while(true) {
        std::cout << "Enter a Number (1 to 100): ";
        cin >> input;
        attempts += 1;
        if (input < random)
        {
            std::cout << "Too Low!" << std::endl;
            std::cout << "Enter a Number: ";
        }
        else if (input > random)
        {
            std::cout << "Too High!" << std::endl;
            std::cout << "Enter a Number: ";
        }
        else
        {
            std::cout << "You Win!" << std::endl;
            break;
        }
    }
    std::cout << attempts << std::endl;
}
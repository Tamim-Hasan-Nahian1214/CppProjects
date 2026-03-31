#include <iostream>
#include <ctime>

using namespace std;

int main() {
    string input;
    std::cout << "Enter your choice in lowercase letters (rock, paper, scissors): " << std::endl;
    cin >> input;
    srand(time(0));
    int random = rand() % 3 + 1;
    if (random == 1 && input == "paper") {
        std::cout << "You Win!" << std::endl;
    }
    if (random == 2 && input == "scissors") {
        std::cout << "You Win!" << std::endl;
    }
    if (random == 3 && input == "rock") {
        std::cout << "You Win!" << std::endl;
    }
    else if (random == 1 && input == "rock" || random == 2 && input == "paper" || random == 3 && input == "scissors") {
        std::cout << "Draw." << std::endl;
    }
    else {
        std::cout << "You Lost!" << std::endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#include <memory>

using namespace std;

int main()
{
    std::shared_ptr<int> sp = std::make_shared<int>(13);
    weak_ptr<int> wp = sp;
    while(true) {
        int input;
        std::cout << "Enter your input: ";
        std::cin >> input;
        if (auto temp = wp.lock()) {
            if (input == 1) {
                std::cout << *temp << std::endl;
            }
        }
        else if (wp.expired()) {
            std::cout << "Data expired" << std::endl;
        }
        int input2;
        if (input == 2) {
            std::cout << "Enter new value for the data: ";
            std::cin >> input2;
            *sp = input2;
            std::cout << "Value Changed! enter 1 to check the value" << std::endl;
        }
        else if (input == 3) {
            sp.reset();
            std::cout << "Data Deleted." << std::endl;
        }
        else if (input == 4) {
            if(!wp.expired()) {
                std::cout << "Data is Alive." << std::endl;
            }
            else {
                std::cout << "Data Expired." << std::endl;
            }
        }
    }
    return 0;
}
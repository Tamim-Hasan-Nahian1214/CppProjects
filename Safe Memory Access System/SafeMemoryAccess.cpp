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
    }
    return 0;
}
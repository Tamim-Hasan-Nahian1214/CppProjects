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
            std::cout << *temp << std::endl;
        }
        else {
            std::cout << "Data expired" << std::endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#include <memory>

using namespace std;

int main() {
    std::shared_ptr<string> username = std::make_shared<string>("Tamim Hasan Nahian");
    std::shared_ptr<string> password = std::make_shared<string>("SayHellotoBangladesh!");
    string UsernameInput;
    while (true) {
        std::cout << "Enter Your Username: ";
        getline(cin, UsernameInput);
        if (UsernameInput == *username) {
            std::cout << "Correct Username!" << std::endl;
        }
        else {
            std::cout << "Wrong Username!" << std::endl;
        }
    }
    return 0;
}
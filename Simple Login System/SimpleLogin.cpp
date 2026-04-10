#include <bits/stdc++.h>
#include <memory>

using namespace std;

int main() {
    std::shared_ptr<string> username = std::make_shared<string>("Tamim Hasan Nahian");
    std::shared_ptr<string> password = std::make_shared<string>("SayHellotoBangladesh!");
    string UsernameInput;
    string UserPasswordInput;
    while (true) {
        std::cout << "Enter Your Username: ";
        getline(cin, UsernameInput);
        UsernameInput == *username ? std::cout << "Correct Username!" << std::endl : std::cout << "Wrong Username!" << std::endl;
        std::cout << "Enter Your Password";
    }
    return 0;
}
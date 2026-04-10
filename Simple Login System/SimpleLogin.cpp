#include <bits/stdc++.h>
#include <memory>

using namespace std;

int main() {
    std::shared_ptr<string> username = std::make_shared<string>("Tamim Hasan");
    std::shared_ptr<int> password = std::make_shared<int>(123456);
    weak_ptr<string> UsernameObserver = username;
    weak_ptr<int> PasswordObserver = password;
    int input;
    string LoginUsername;
    int LoginPassword;
    while (true) {
        std::cout << "Enter Your Input: ";
        std::cin >> input;
        if (input == 1) {
            if (!UsernameObserver.expired() && !PasswordObserver.expired()) {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cout << "Login" << std::endl;
                std::cout << "Enter Your Username: ";
                std::getline(std::cin, LoginUsername);
                std::cout << "Enter Your Password: ";
                std::cin >> LoginPassword;
                LoginUsername == *username && LoginPassword == *password ? std::cout << "Correct Password!" << std::endl : std::cout << "Incorrect Username or Password!" << std::endl;
            }
            else {
                std::cout << "This account doesn't exist!" << std::endl;
            }
            
        }
    }
    return 0;
}
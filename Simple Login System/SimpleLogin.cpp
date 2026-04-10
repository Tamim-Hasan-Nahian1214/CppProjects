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
    int ChangePassword;
    while (true) {
        std::cout << "Enter Your Input: ";
        std::cin >> input;
        switch (input) {
            case 1:
                if (!UsernameObserver.expired() && !PasswordObserver.expired())
                {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    std::cout << "Login" << std::endl;
                    std::cout << "Enter Your Username: ";
                    std::getline(std::cin, LoginUsername);
                    std::cout << "Enter Your Password: ";
                    std::cin >> LoginPassword;
                    LoginUsername == *username &&LoginPassword == *password ? std::cout << "Correct Password!" << std::endl : std::cout << "Incorrect Username or Password!" << std::endl;
                }
                else
                {
                    std::cout << "This account doesn't exist!" << std::endl;
                }
                break;
            case 2: 
                if (!UsernameObserver.expired() && !PasswordObserver.expired()) {
                    std::cout << "Change Password" << std::endl;
                    std::cout << "Enter New Password: ";
                    std::cin >> ChangePassword;
                    *password = ChangePassword;
                    std::cout << "Your New Password is: " << *password << std::endl;
                }
                else {
                    std::cout << "This account doesn't exist!" << std::endl;
                }
                break;
            case 3:
                username.reset();
                password.reset();
                std::cout << "Account Deleted Successfully." << std::endl;
                break;
            case 4:
                if (!UsernameObserver.expired() && !PasswordObserver.expired()) {
                    std::cout << "Account exists" << std::endl;
                }
                else {
                    std::cout << "Account deleted" << std::endl;
                }
        }
        
    }
    return 0;
}
#include <bits/stdc++.h>
#include <memory>

using namespace std;

int main() {
    std::shared_ptr<string> username = std::make_shared<string>("Tamim Hasan");
    std::shared_ptr<int> password = std::make_shared<int>(123456);
    weak_ptr<string> UsernameObserver = username;
    weak_ptr<int> PasswordObserver = password;
    return 0;
}
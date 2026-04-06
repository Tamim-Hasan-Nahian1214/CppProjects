#include <bits/stdc++.h>

using namespace std;

int main() {
    while (true) {
        int input;
        std::cout << "Enter a number: ";
        std::cin >> input;
        string sinput = to_string(input);
        std::cout << sinput << std::endl;
        input % 2 == 0 ? std::cout << "Even Number" << std::endl : std::cout << "Odd Number" << std::endl;
        input < 0 ? std::cout << "Negetive Number" << std::endl : std::cout << "Positive Number" << std::endl;
        std::cout << sinput.length() << std::endl;
    } 
    return 0;
}
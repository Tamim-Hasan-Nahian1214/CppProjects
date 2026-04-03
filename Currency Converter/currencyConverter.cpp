#include <bits/stdc++.h>

using namespace std;

int main() {
    double taka = 122.41;
    double input;
    std::cout << "Enter The ammount of USD you want to convert to BDT: ";
    std::cin >> input;
    std::cout << input << "USD = " << taka*input << "BDT" << std::endl;
    return 0;
}
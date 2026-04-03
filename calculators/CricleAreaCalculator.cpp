#include <iostream>
#include <cmath>

using namespace std;

int main() {
    std::cout << "****************************************" << std::endl;
    std::cout << "Welcome To The Cricle Radius Calculator!" << std::endl;
    std::cout << "****************************************" << std::endl;
    double radius;
    std::cout << "Enter Radius of Circle: ";
    cin >> radius;
    std::cout << "The Area of The Circle is: " << M_PI * pow(radius, 2) << std::endl;
    return 0;
}

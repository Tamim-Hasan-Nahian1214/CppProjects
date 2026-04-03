#include <iostream>
#include <cmath>

void addition()
{
    int additionA;
    std::cout << "Enter Number 1: ";
    std::cin >> additionA;
    int additionB;
    std::cout << "Enter Number 2: ";
    std::cin >> additionB;
    int additionResult = additionA + additionB;
    std::cout << "The Addition is: " << additionResult << std::endl;
}

void subtraction()
{
    int subtractionA;
    std::cout << "Enter Number 1: ";
    std::cin >> subtractionA;
    int subtractionB;
    std::cout << "Enter Number 2: ";
    std::cin >> subtractionB;
    int subtractionResult = subtractionA - subtractionB;
    std::cout << "The Subtraction is: " << subtractionResult << std::endl;
}

void multiplication()
{
    int multiplicationA;
    std::cout << "Enter Number 1: ";
    std::cin >> multiplicationA;
    int multiplicationB;
    std::cout << "Enter Number 2: ";
    std::cin >> multiplicationB;
    int multiplicationResult = multiplicationA * multiplicationB;
    std::cout << "The Multiplication is: " << multiplicationResult << std::endl;
}

void division()
{
    int divisionA;
    std::cout << "Enter Number 1: ";
    std::cin >> divisionA;
    int divisionB;
    std::cout << "Enter Number 2: ";
    std::cin >> divisionB;
    int divisionResult = divisionA / divisionB;
    std::cout << "The Division is: " << divisionResult << std::endl;
    if (divisionB == 0)
    {
        std::cout << "You Can't Divide a Number with 0!" << std::endl;
    }
}

void hypotenuse()
{
    int hypotenuseA;
    std::cout << "Enter the size of a: ";
    std::cin >> hypotenuseA;
    int hypotenuseB;
    std::cout << "Enter the size of b: ";
    std::cin >> hypotenuseB;
    double hypotenuseC;
    hypotenuseC = std::sqrt(std::pow(hypotenuseA, 2) + std::pow(hypotenuseB, 2));
    std::cout << "Hypotenuse: " << hypotenuseC << std::endl;
}

int main()
{
    std::string input;
    std::cout << "Enter The Operation (addition, subtraction, multiplication, division, hypotenuse): ";
    std::cin >> input;
    if (input == "addition")
    {
        addition();
    }
    else if (input == "subtraction")
    {
        subtraction();
    }
    else if (input == "multiplication")
    {
        multiplication();
    }
    else if (input == "division")
    {
        division();
    }
    else if (input == "hypotenuse")
    {
        hypotenuse();
    }
    else
    {
        std::cout << "Wrong Input" << std::endl;
    }
    return 0;
}
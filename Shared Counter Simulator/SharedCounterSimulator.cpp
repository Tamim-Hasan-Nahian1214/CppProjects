#include <bits/stdc++.h>
#include <memory>

using namespace std;

int main()
{
    std::shared_ptr<int> p = std::make_shared<int>(1);
    std::shared_ptr<int> p2 = p;
    std::shared_ptr<int> p3 = p2;
    while (true)
    {
        int input;
        std::cout << "Enter an operation (1, 2, 3, 4): ";
        std::cin >> input;
        switch (input) {
        case 1:
            *p += 1;
            break;
        case 2:
            std::cout << *p << std::endl;
            break;
        case 3:
            std::cout << p.use_count() << std::endl;
            break;
        }
    }
    return 0;
}
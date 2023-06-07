#include <iostream>

int main()
{

    int number_one, number_two;
    std::cout << "Enter your first integer number: " << std::endl;
    std::cin >> number_one;
    std::cout << "Enter your second integer number: " << std::endl;
    std::cin >> number_two;
    int sum = number_one + number_two;

    std::cout << "The sum: " << sum << std::endl;
    return 0;
}
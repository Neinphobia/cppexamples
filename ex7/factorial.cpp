#include <iostream>
#include <limits>
using std::cin;
using std::cout;
using std::endl;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1; // return 1 as the base case
    }
    else
    {
        return n * factorial(n - 1); // return n multiplied by the factorial of n - 1 as the recursive case
    }
}
int main()
{
    int num;
    bool valid;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> num;

        if (std::cin.fail()) // check if the input is invalid
        {
            cout << "Invalid input. Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            valid = false;
            continue;
        }

        if (num >= 0) // check if num is non-negative
        {
            int result = factorial(num);
            cout << "The factorial of " << num << " is " << result << endl;
            valid = true;
        }
        else
        {
            cout << "Invalid input. Please enter a positive integer." << endl;
            valid = false;
        }
    } while (!valid);
    return 0;
}

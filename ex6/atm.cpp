#include <iostream>
#include <limits>

int main()
{
    int choice;
    bool valid;
    do
    {
        std::cout << "Please enter a number from 1 to 4: ";
        std::cin >> choice;

        if (std::cin.fail()) // check if the input is invalid
        {
            std::cout << "Invalid input. Please enter a number." << std::endl;  // print an error message to the standard output stream
            std::cin.clear();                                                   // clear the error state of the cin object
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any remaining characters in the input buffer until a new line
            valid = false;                                                      // set valid to false
            continue;                                                           // skip the rest of the loop and start over
        }

        switch (choice)
        {
        case 1:
            std::cout << "You chose 1. Good luck!" << std::endl;
            valid = true;
            break;
        case 2:
            std::cout << "You chose 2. Well done!" << std::endl;
            valid = true;
            break;
        case 3:
            std::cout << "You chose 3. Nice try!" << std::endl;
            valid = true;
            break;
        case 4:
            std::cout << "You chose 4. Better luck next time!" << std::endl;
            valid = true;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            valid = false;
        }
    } while (!valid);
    return 0;
}

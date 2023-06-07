#include <iostream> // include the input/output library
#include <cmath>    // include the math library

int main() // define the main function
{
    double radius;                                   // declare a variable to store the radius
    std::cout << "Enter the radius of the circle: "; // prompt the user for input
    std::cin >> radius;                              // read the input and store it in radius

    double area = M_PI * radius * radius; // calculate the area using the formula pi * r^2

    std::cout << "The area of the circle is " << area << std::endl; // print the result to the standard output stream
    return 0;                                                       // return 0 to indicate success
}

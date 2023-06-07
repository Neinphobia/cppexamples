#include <iostream>

class Point
{
public: // declare public members
    double x;
    double y;

    Point(double x, double y) // define a constructor that takes two parameters
    {
        this->x = x;
        this->y = y;
    }

    void print() // define a method that prints the point's coordinates
    {
        std::cout << "(" << x << ", " << y << ")" << std::endl; // print the coordinates in parentheses
    }
};

int main()
{
    Point p1(1.5, 2.3); // create a point object
    Point p2(3.8, 4.5); // create another point object

    p1.print(); // call
    p2.print();
    return 0;
}

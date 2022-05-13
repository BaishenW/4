#include <iostream>
#include "Rectangle.h"
#include "Square.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Square mySquare(2);
    std::cout << "The area of mySquare is: "
              << mySquare.compute_area()
              << std::endl;
    Rectangle myRectangle( 2, 4 );
    std::cout << "The area of myRectangle is: "
              << myRectangle.compute_area()
              << std::endl;

    Square mySquare2(5);
    std::cout << "The area of mySquare is: "
              << mySquare2.compute_area()
              << std::endl;
    Rectangle myRectangle2( 7, 5 );
    std::cout << "The area of myRectangle is: "
              << myRectangle2.compute_area()
              << std::endl;

    std::cout << "the side of mySquare2 is " << mySquare2.Square::getSide() << std::endl;

    try{
        Square brokenSquare( -1 );
    } catch (const std::exception& e) { std::cout << "error:" << e.what() << std::endl; }

    try{
        Rectangle brokenRectangle( 4 , 0 );
    } catch (const std::exception& e) { std::cout << "error:" << e.what() << std::endl; }

    std::cout <<
    "======================================= \n" <<
    "Thanks for the wonderful semester Mark!\n" <<
    "=======================================" << std::endl;



    return 0;
}

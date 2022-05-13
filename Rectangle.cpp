///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdexcept>
#include "Rectangle.h"

Rectangle::Rectangle(double newLength, double newWidth) {
    if (newLength <= 0.0 || newWidth <= 0)
        throw std::invalid_argument("length or width cannot be equal to or less than 0");
    Rectangle::length = newLength;
    Rectangle::width  = newWidth;
}

double Rectangle::getLength() const {
    return Rectangle::length;
}

double Rectangle::getWidth() const {
    return Rectangle::width;
}

double Rectangle::compute_area() {
    return getWidth() * getLength();
}


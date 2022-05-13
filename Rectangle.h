///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Shape.h"

class Rectangle : public Shape{
protected: //protected members
    double length;
    double width;

public:
    Rectangle(double newLength, double newWidth);

public:
    double getLength() const;

    double getWidth() const;

    double compute_area() override;

};




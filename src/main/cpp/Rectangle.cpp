/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW01 - The Big Five
 *
 * @file   Rectangle.h
 * @brief  Rectangle implementation.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * TODO:    Your Name <your-username@live.missouristate.edu>
 */

#include "Rectangle.h"

Rectangle::Rectangle(double length, double height) : length{new double{length}}, height{new double{height}} {
    // Intentionally empty
}

// TODO: Implement the Big-Five in the space below (above getLength())

// DO NOT MODIFY ANYTHING BELOW THIS LINE

double Rectangle::getLength() const {
    return *length;
}

void Rectangle::setLength(double length) {
    *Rectangle::length = length;
}

double Rectangle::getHeight() const {
    return *height;
}

void Rectangle::setHeight(double height) {
    *Rectangle::height = height;
}

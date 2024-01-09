#include "Vector.h"
#include <iostream>
#include <cmath>

// Vector::Vector(double x_val, double y_val) : x(x_val), y(y_val) {}

double Vector::calculateMagnitude() const {
    return sqrt(x * x + y * y);
}

double Vector::calculateDotProduct(const Vector& other) const {
    return x * other.x + y * other.y;
}

Vector Vector::add(const Vector& other) const {
    return Vector(x + other.x, y + other.y);
}

Vector Vector::subtract(const Vector& other) const {
    return Vector(x - other.x, y - other.y);
}

Vector Vector::multiplyByConstant(double constant) const {
    return Vector(x * constant, y * constant);
}

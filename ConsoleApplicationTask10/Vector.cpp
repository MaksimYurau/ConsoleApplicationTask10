#include "Vector.h"
#include <cmath>
#include <stdexcept>

Vector::Vector(const std::vector<double>& values) : components(values) {}

double Vector::getMagnitude() const {
    double sumOfSquares = 0.0;
    for (double component : components) {
        sumOfSquares += component * component;
    }
    return std::sqrt(sumOfSquares);
}

double Vector::dotProduct(const Vector& other) const {
    if (components.size() != other.components.size()) {
        throw std::invalid_argument("Vectors must have the same number of components.");
    }

    double result = 0.0;
    for (size_t i = 0; i < components.size(); i++) {
        result += components[i] * other.components[i];
    }
    return result;
}

Vector Vector::operator+(const Vector& other) const {
    if (components.size() != other.components.size()) {
        throw std::invalid_argument("Vectors must have the same number of components.");
    }

    std::vector<double> resultComponents(components.size());
    for (size_t i = 0; i < components.size(); i++) {
        resultComponents[i] = components[i] + other.components[i];
    }
    return Vector(resultComponents);
}

Vector Vector::operator-(const Vector& other) const {
    if (components.size() != other.components.size()) {
        throw std::invalid_argument("Vectors must have the same number of components.");
    }

    std::vector<double> resultComponents(components.size());
    for (size_t i = 0; i < components.size(); i++) {
        resultComponents[i] = components[i] - other.components[i];
    }
    return Vector(resultComponents);
}

Vector Vector::operator*(double scalar) const {
    std::vector<double> resultComponents(components.size());
    for (size_t i = 0; i < components.size(); i++) {
        resultComponents[i] = components[i] * scalar;
    }
    return Vector(resultComponents);
}

const std::vector<double>& Vector::getComponents() const {
    return components;
}
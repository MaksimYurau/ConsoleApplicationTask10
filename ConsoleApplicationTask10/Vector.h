#pragma once

#ifndef VECTOR_H
#define VECTOR_H

#include <vector>

class Vector {
private:
    std::vector<double> components;

public:
    Vector(const std::vector<double>& values);

    double getMagnitude() const;
    double dotProduct(const Vector& other) const;
    Vector operator+(const Vector& other) const;
    Vector operator-(const Vector& other) const;
    Vector operator*(double scalar) const;
    const std::vector<double>& getComponents() const; // Добавленный метод
};

#endif // VECTOR_H
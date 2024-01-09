#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cmath>

class Vector {
private:
    double x;
    double y;

public:

    Vector(double x, double y) : x(x), y(y) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double calculateMagnitude() const;

    double calculateDotProduct(const Vector& other) const;

    Vector add(const Vector& other) const;

    Vector subtract(const Vector& other) const;

    Vector multiplyByConstant(double constant) const;

    static Vector findVectorWithMinimumSum(const Vector* vectors, int arraySize) {
        Vector minSumVector = vectors[0];
        double minSum = minSumVector.getX() + minSumVector.getY();

        for (int i = 1; i < arraySize; i++) {
            double currentSum = vectors[i].getX() + vectors[i].getY();
            if (currentSum < minSum) {
                minSumVector = vectors[i];
                minSum = currentSum;
            }
        }

        return minSumVector;
    }

    static Vector findVectorWithMaximumSum(const Vector* vectors, int arraySize) {
        Vector maxSumVector = vectors[0];
        double maxSum = maxSumVector.getX() + maxSumVector.getY();

        for (int i = 1; i < arraySize; i++) {
            double currentSum = vectors[i].getX() + vectors[i].getY();
            if (currentSum > maxSum) {
                maxSumVector = vectors[i];
                maxSum = currentSum;
            }
        }

        return maxSumVector;
    }

    double getMagnitude() const {
        return std::sqrt(x * x + y * y);
    }

    static void printVectorsWithMagnitude(const Vector* vectors, int arraySize, double targetMagnitude) {
        for (int i = 0; i < arraySize; i++) {
            double magnitude = vectors[i].getMagnitude();
            if (std::abs(magnitude - targetMagnitude) < 0.0001) {
                std::cout << "Вектор: (" << vectors[i].getX() << ", " << vectors[i].getY() << ")" << std::endl;
            }
        }
    }
};

#endif // VECTOR_H

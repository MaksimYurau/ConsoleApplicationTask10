#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    double x;
    double y;

public:
    // Конструктор
    Vector(double x, double y) : x(x), y(y) {}

    // Методы доступа к компонентам вектора
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

    static void printVectorsWithMagnitude(const Vector* vectors, int arraySize, double targetMagnitude);
};

#endif // VECTOR_H

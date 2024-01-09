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

    static Vector findVectorWithMaximumSum(const Vector* vectors, int arraySize);

    static Vector findVectorWithMinimumSum(const Vector* vectors, int arraySize);

    static void printVectorsWithMagnitude(const Vector* vectors, int arraySize, double targetMagnitude);
};

#endif // VECTOR_H

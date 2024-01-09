#include "Vector.h"
#include <iostream>

int main() {
    setlocale(0, "ru");

    const int arraySize = 5;
    Vector vectors[arraySize] = { Vector(1, 2), Vector(3, 4), Vector(5, 6), Vector(7, 8), Vector(9, 10) };

    // Вызов некоторых функций
    double magnitude = vectors[0].calculateMagnitude();
    std::cout << "Модуль (длина) первого вектора: " << magnitude << std::endl;

    Vector vector1(2, 3);
    Vector vector2(4, 5);

    double dotProduct = vector1.calculateDotProduct(vector2);
    std::cout << "Скалярное произведение вектора1 и вектора2: " << dotProduct << std::endl;

    Vector sumVector = vector1.add(vector2);
    std::cout << "Сумма вектора1 и вектора2: (" << sumVector.getX() << ", "
        << sumVector.getY() << ")" << std::endl;

    Vector diffVector = vector1.subtract(vector2);
    std::cout << "Сумма вектора1 и вектора2: (" << diffVector.getX() << ", "
        << diffVector.getY() << ")" << std::endl;

    double constant = 2.5;
    Vector scaledVector = vector1.multiplyByConstant(constant);
    std::cout << "Вектор1 умноженный на константу " << constant << ": (" << scaledVector.getX() << ", "
        << scaledVector.getY() << ")" << std::endl;

    // a) Вывести вектора с заданным модулем (длиной вектора)
    const double targetMagnitude = 5.0;
    Vector::printVectorsWithMagnitude(vectors, arraySize, targetMagnitude);

    // b) Определить вектор с наибольшей суммой элементов
    Vector minSumVector = Vector::findVectorWithMinimumSum(vectors, arraySize);
    Vector maxSumVector = Vector::findVectorWithMaximumSum(vectors, arraySize);

    std::cout << "Вектор с наименьшей суммой элементов: (" << minSumVector.getX() << ", "
        << minSumVector.getY() << ")" << std::endl;

    std::cout << "Вектор с наибольшей суммой элементов: (" << maxSumVector.getX() << ", "
        << maxSumVector.getY() << ")" << std::endl;

    std::cout << std::endl;
    system("pause");
    return 0;
}

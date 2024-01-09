#include "Vector.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<Vector> vectors = {
        Vector({1.0, 2.0, 3.0}),
        Vector({-1.0, 0.0, 2.5}),
        Vector({3.5, -2.0, 1.5})
    };

    double targetMagnitude = 5.0;
    std::cout << "Vectors with magnitude " << targetMagnitude << ":" << std::endl;
    for (const Vector& vector : vectors) {
        if (vector.getMagnitude() == targetMagnitude) {
            for (double component : vector.getComponents()) {
                std::cout << component << " ";
            }
            std::cout << std::endl;
        }
    }

    Vector maxSumVector = vectors[0];
    Vector minSumVector = vectors[0];
    double maxSum = vectors[0].getMagnitude();
    double minSum = vectors[0].getMagnitude();
    for (const Vector& vector : vectors) {
        double sum = vector.getMagnitude();
        if (sum > maxSum) {
            maxSum = sum;
            maxSumVector = vector;
        }
            if (sum < minSum) {
                minSum = sum;
                    minSumVector = vector;
            }
    }

    std::cout << "Vector with maximum sum of components: ";
        for (double component : maxSumVector.getComponents()) {
            std::cout << component << " ";
        }
    std::cout << std::endl;

    std::cout << "Vector with minimum sum of components: ";
    for (double component : minSumVector.getComponents()) {
        std::cout << component << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <cmath>

// Function to calculate factorial
double factorial(int n) {
    double result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate Taylor series expansion of e^x
double expTaylorSeries(double x, int terms) {
    double sum = 0;
    for (int i = 0; i <= terms; i++) {
        sum += pow(x, i) / factorial(i);
    }
    return sum;
}

// Function to calculate Taylor series expansion of sin(x)
double sinTaylorSeries(double x, int terms) {
    double sum = 0;
    for (int i = 0; i <= terms; i++) {
        double sign = (i % 2 == 0) ? 1 : -1;
        sum += pow(x, 2 * i + 1) / factorial(2 * i + 1) * sign;
    }
    return sum;
}

// Function to calculate Taylor series expansion of cos(x)
double cosTaylorSeries(double x, int terms) {
 double sum = 0;
    for (int i = 0; i <= terms; i++) {
        double sign = (i % 2 == 0) ? 1 : -1;
        sum += pow(x, 2 * i) / factorial(2 * i) * sign;
    }
    return sum;
}

int main() {
    double x;
    int terms;

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    std::cout << "Enter the number of terms: ";
    std::cin >> terms;

    std::cout << "e^x (Taylor Series): " << expTaylorSeries(x, terms) << std::endl;
    std::cout << "sin(x) (Taylor Series): " << sinTaylorSeries(x, terms) << std::endl;
    std::cout << "cos(x) (Taylor Series): " << cosTaylorSeries(x, terms) << std::endl;

    return 0;
}



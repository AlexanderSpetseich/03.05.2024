#include <iostream>

struct Complex {
    double real;
    double imag;

    Complex operator+(const Complex& other) {
        return { real + other.real, imag + other.imag };
    }

    Complex operator-(const Complex& other) {
        return { real - other.real, imag - other.imag };
    }

    Complex operator*(const Complex& other) {
        return { real * other.real - imag * other.imag, real * other.imag + imag * other.real };
    }

    Complex operator/(const Complex& other) {
        double denominator = other.real * other.real + other.imag * other.imag;
        return { (real * other.real + imag * other.imag) / denominator,
                (imag * other.real - real * other.imag) / denominator };
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Complex c1{ 8, 1 };
    Complex c2{ 0, 6 };

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex multiplication = c1 * c2;
    Complex division = c1 / c2;

    std::cout << "Сумма: " << sum.real << " + " << sum.imag << "\n";
    std::cout << "Разность: " << difference.real << " + " << difference.imag << "\n";
    std::cout << "Умножение: " << multiplication.real << " + " << multiplication.imag << "\n";
    std::cout << "Деление: " << division.real << " + " << division.imag << "\n";

    return 0;
}
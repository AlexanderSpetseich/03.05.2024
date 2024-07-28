#include <iostream>
#include <string>

struct Car {
    double length;
    double clearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    std::string color;
    std::string transmissionType;

    void inputValues() {
        std::cout << "Введите длину автомобиля: ";
        std::cin >> length;
        std::cout << "Введите клиренс: ";
        std::cin >> clearance;
        std::cout << "Введите объем двигателя: ";
        std::cin >> engineVolume;
        std::cout << "Введите мощность двигателя: ";
        std::cin >> enginePower;
        std::cout << "Введите диаметр колес: ";
        std::cin >> wheelDiameter;
        std::cin.ignore(); // для игнорирования символа новой строки
        std::cout << "Введите цвет: ";
        std::getline(std::cin, color);
        std::cout << "Введите тип коробки передач: ";
        std::getline(std::cin, transmissionType);
    }

    void displayValues() {
        std::cout << "Длина: " << length << "\n";
        std::cout << "Клиренс: " << clearance << "\n";
        std::cout << "Объем двигателя: " << engineVolume << "\n";
        std::cout << "Мощность двигателя: " << enginePower << "\n";
        std::cout << "Диаметр колес: " << wheelDiameter << "\n";
        std::cout << "Цвет: " << color << "\n";
        std::cout << "Тип коробки передач: " << transmissionType << "\n";
    }

    // Пример функции поиска может быть добавлен позже, в зависимости от требований.
};

int main() {
    setlocale(LC_ALL, "RU");
    Car car;
    car.inputValues();
    car.displayValues();

    return 0;
}
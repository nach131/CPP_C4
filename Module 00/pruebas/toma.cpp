#include <iostream>

// Definición de la clase "Coche"
class Car {
public:
    // Atributos (variables miembro)
    std::string brand;
    std::string model;
    int year;

    // Métodos (funciones miembro)
    void ShowInfo() {
        std::cout << "Marca: " << brand << "\nModelo: " << model << "\nAño: " << year << std::endl;
    }
};

int main() {
    // Creación de objetos de la clase "Coche"
    Car car1;
    Car car2;

    // Asignación de valores a los atributos
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2022;

    car2.brand = "Honda";
    car2.model = "Civic";
    car2.year = 2021;

    // Uso de los métodos para mostrar información
    std::cout << "Información del Coche 1:\n";
    car1.ShowInfo();

    std::cout << "\nInformación del Coche 2:\n";
    car2.ShowInfo();

    return 0;
}

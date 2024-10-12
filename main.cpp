#include <iostream>
#include <string>

class Car {
    std::string make_, model_;
    int year_, currentYear_;
public:
    Car(const std::string& make, const std::string& model, int year, int currentYear)
        : make_(make), model_(model), year_(year), currentYear_(currentYear) {}

    void displayInfo() const {
        std::cout << "Make: " << make_ << ", model: " << model_ << ", year: " << year_ << std::endl;
    }

    int getCarAge() const {
        return currentYear_ - year_;
    }

    bool isSameCar(const Car& other) const {
        return make_ == other.make_ && model_ == other.model_ && year_ == other.year_;
    }
    bool operator==(const Car& other) const {
        return isSameCar(other);
    }
};

int main() {
    Car car("Toyota", "Civic", 2020, 2024), notCar("", "", 0, 2024);
    car.displayInfo();
    notCar.displayInfo();
    std::cout << "Car age: " << car.getCarAge() << std::endl;
    std::cout << "Is same car?: " << std::boolalpha << car.isSameCar(notCar) << std::endl;//(car == notCar)
    
    return 0;
}

#include <iostream>
#include <string>

class Car {
    std::string make_, model_;
    int year_;
public:
    Car(const std::string& make, const std::string& model, int year)
        : make_(make), model_(model), year_(year) {}

    void displayInfo() const {
        std::cout << "Make: " << make_ << ", model: " << model_ << ", year: " << year_ << std::endl;
    }
   
};

int main() {
    Car car("Toyota", "Civic", 2024), notCar("", "", 0);
    car.displayInfo();
    notCar.displayInfo();
    
    return 0;
}

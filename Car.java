public class Car {
    String make_;
    String model_;
    int year_;
    int currentYear_;
    
    public Car(String make, String model, int year, int currentYear) {
        make_ = make;
        model_ = model;
        year_ = year;
        currentYear_ = currentYear;
    }

    public void displayInfo() {
        System.out.println("Make: " + make_ + ", model: " + model_ + ", year: " + year_);
    }

    public int getCarAge() {
        return currentYear_ - year_;
    }

    public boolean isSameCar(Car other) {
        return make_ == other.make_ && model_ == other.model_ && year_ == other.year_;
    }

    public static void main(String[] args) {
        Car car = new Car("Toyota", "Civic", 2020, 2024), car2 = new Car("Toyota", "Civic", 2020, 2024);
        car.displayInfo();
        System.out.println("Car age: " + car.getCarAge());
        System.out.println("Is same car: " + car.isSameCar(car2));
    }
}

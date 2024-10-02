public class Car {
    String make_;
    String model_;
    int year_;
    
    public Car(String make, String model, int year) {
        make_ = make;
        model_ = model;
        year_ = year;
    }

    public void displayInfo() {
        System.out.println("Make: " + make_ + ", model: " + model_ + ", year: " + year_);
    }

    public static void main(String[] args) {
        Car car = new Car("Toyota", "Civic", 2024);
        car.displayInfo();
    }
}

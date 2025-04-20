//#include <iostream>
//using namespace std;
//
//// Base class for Car
//class Car {
//protected:
//    string model, transmission, chassisNumber;
//    int manufactureYear;
//    double price, engineSize;
//
//public:
//    Car(string m, int y, double p, double e, string t, string c);
//    virtual void display() {
//        cout << "Model: " << model << " | Year: " << manufactureYear << " | Price: " << price
//            << " | Engine: " << engineSize << "L | Transmission: " << transmission << endl;
//    }
//    virtual double getFinalPrice() { return price; }
//    string getModel() { return model; }
//};
//
//Car::Car(string m, int y, double p, double e, string t, string c) {
//    model = m;
//    manufactureYear = y;
//    price = p;
//    engineSize = e;
//    transmission = t;
//    chassisNumber = c;
//}
//// Derived class for Used Car
//class UsedCar : public Car {
//    string registrationNumber;
//public:
//    UsedCar(string m, int y, double p, double e, string t, string c, string reg)
//        : Car(m, y, p, e, t, c), registrationNumber(reg) {
//    }
//    void display() override {
//        Car::display();
//        cout << "Registration: " << registrationNumber << endl;
//    }
//};
//
//// Derived class for Imported Car
//class ImportedCar : public Car {
//    string auctionDate, auctionGrade;
//public:
//    ImportedCar(string m, int y, double p, double e, string t, string c, string aDate, string aGrade)
//        : Car(m, y, p, e, t, c), auctionDate(aDate), auctionGrade(aGrade) {
//    }
//    void display() override {
//        Car::display();
//        cout << "Auction Date: " << auctionDate << " | Auction Grade: " << auctionGrade << endl;
//    }
//};
//
//// Showroom Class
//class Showroom {
//    Car* cars[10]; // Fixed-size array for simplicity
//    int carCount;
//public:
//    Showroom() : carCount(0) {}
//    void addCar(Car* car) {
//        if (carCount < 10) {
//            cars[carCount++] = car;
//        }
//        else {
//            cout << "Showroom is full!\n";
//        }
//    }
//    void showCars() {
//        cout << "\nAvailable Cars:\n";
//        for (int i = 0; i < carCount; i++) {
//            cout << i + 1 << ". ";
//            cars[i]->display();
//        }
//    }
//    void sellCar(int index) {
//        if (index >= 0 && index < carCount) {
//            cout << "Car " << cars[index]->getModel() << " sold!\n";
//            delete cars[index];
//            for (int i = index; i < carCount - 1; i++) {
//                cars[i] = cars[i + 1];
//            }
//            carCount--;
//        }
//        else {
//            cout << "Invalid selection!\n";
//        }
//    }
//    ~Showroom() {
//        for (int i = 0; i < carCount; i++)
//            delete cars[i];
//    }
//};
//
//int main() {
//    Showroom showroom;
//    showroom.addCar(new Car("Toyota Corolla", 2023, 30000, 1.8, "Automatic", "CH12345"));
//    showroom.addCar(new UsedCar("Honda Civic", 2017, 20000, 1.5, "Manual", "CH67890", "REG-9876"));
//    showroom.addCar(new ImportedCar("BMW X5", 2022, 50000, 3.0, "Automatic", "CH54321", "2024-02-10", "Grade A"));
//    showroom.addCar(new Car("Toyota Furtuner", 2014, 30000, 1.8, "Automatic", "CH12345"));
//    showroom.addCar(new UsedCar("Honda city", 2008, 20000, 1.5, "Manual", "CH67890", "REG-9876"));
//    showroom.addCar(new ImportedCar("Audi A7", 2025, 50000, 3.0, "Automatic", "CH54321", "2024-02-10", "Grade A"));
//
//    showroom.showCars();
//
//    cout << "\nEnter car number to purchase: ";
//    int choice;
//    cin >> choice;
//    showroom.sellCar(choice - 1);
//
//    showroom.showCars();
//    return 0;
//}
//
//
//
//

//#include <iostream>
//using namespace std;
//
//class a {
//public:
//	a() {
//		cout << "Hello from A " << endl;
//	}
//	~a() {
//		cout << "Bye from a " << endl;
//	}
//};
//
//class b:public a {
//public:
//	b() {
//		cout << "Hello from B " << endl;
//	}
//	~b() {
//		cout << "Bye from B " << endl;
//	}
//};
//
//class c :public b {
//public:
//	c() {
//		cout << "Hello from C " << endl;
//	}
//	~c() {
//		cout << "Bye from C " << endl;
//	}
//};
//
//
//
//
//
//
//class sim {
//public :
//	sim() {
//		cout << "including sim" << endl;
//	}
//	~sim() {
//		cout << "Removing sim" << endl;
//	}
//};
//
//class mobile {
//private :
//	sim mobile_sim;
//public:
//	mobile() {
//		cout << "Mobile is ready" << endl;
//	}
//	~mobile() {
//		cout << "dissembling the mobile" << endl;
//	}
//};
//
//int main() {
//	c c_object;
//	cout << endl;
//	cout << endl;
//	mobile Mobi6;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class mango {
//private:
//	int name;
//public:
//	mango();
//};
//
//mango::mango(){
//} cv                                                                                                                                         v 
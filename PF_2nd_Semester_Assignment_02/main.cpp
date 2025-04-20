//#include "Cars.h"
//#include "Used_Cars.h"
//#include "Imported_Cars.h"
//#include "Showroom.h"
//#include "Seller.h"
//#include <iostream>
//
//using namespace std;
//
//void displayMenu() {
//    cout << "\nHow can I assist you Sir!\n";
//    cout << "1. View available cars in our Showroom\n";
//    cout << "2. Purchase a car\n";
//    cout << "3. Sell your car\n";
//    cout << "0. Exit\n";
//    cout << "Enter your choice in the form of (0,1,2,3): ";
//}
//
//int main() {
//    cout << "                                                         ->         WELCOME         <-                                                  " << endl;
//    ShowRoom showroom("Wali Motors", "62B-2", "+92-3268666254", "walimotors@gmail.com", "TX-9119");
//    showroom.addCar(new Cars("Toyota Corolla", 2023, 520000, 1.8, "Automatic", "CH12345"));
//    showroom.addCar(new UsedCar("Honda Civic", 2017, 350000, 1.5, "Manual", "CH67890", "REG-9876"));
//    showroom.addCar(new Cars("BMW", 2022, 590000, 3.0, "Automatic", "CH54321"));
//    showroom.addCar(new Cars("Toyota Fortuner", 2014, 890000, 1.8, "Automatic", "CH12345"));
//    showroom.addCar(new UsedCar("Honda City", 2008, 430000, 1.5, "Manual", "CH67890", "REG-9876"));
//    showroom.addCar(new Cars("Audi A7", 2025, 580000, 3.0, "Automatic", "CH54321"));
//    showroom.addCar(new ImportedCar("Mercedes-Benz S-Class", 2023, 800000, 4.0, "Automatic", "CH98765", "2024-01-15", "Grade A"));
//    showroom.addCar(new ImportedCar("meri car", 2022, 120000, 3.5, "Automatic", "CH87654", "2023-12-10", "Grade B"));
//
//
//    showroom.display();
//    int choice;
//    while (true) {
//        displayMenu();
//        cin >> choice;
//        switch (choice) {
//
//        case 1:
//            showroom.showCars();
//            break;
//        case 2:
//            cout << "\nEnter car number to purchase (0 to cancel): ";
//            int carNumber;
//            cin >> carNumber;
//            if (carNumber == 0) break;
//            if (carNumber > 0 && carNumber <= showroom.getCarCount()) {
//                Cars* car = showroom.getCar(carNumber - 1);
//                cout << "You have selected the following car:\n";
//                car->display();
//                cout << "Do you want to proceed with the purchase? (yes/no): ";
//                string confirmation;
//                cin >> confirmation;
//                if (confirmation == "yes") {
//                    showroom.generateReceipt(car);
//                    showroom.sellCar(carNumber - 1);
//                }
//                else {
//                    cout << "Purchase cancelled.\n";
//                }
//            }
//            else {
//                cout << "Invalid selection! Please enter a valid car number.\n";
//            }
//            break;
//
//        case 3: { 
//            string name, contact, email;
//            cout << "Enter your details to sell a car:\n";
//            cout << "Name: "; cin >> name;
//            cout << "Contact Number: "; cin >> contact;
//            cout << "Email: "; cin >> email;
//
//            Seller seller(name, contact, email);
//            showroom.buyCarFromCustomer(seller);
//            break;
//        }
//
//        case 0:
//            cout << "Exiting the showroom. Thank you!\n";
//            return 0;
//        default:
//            cout << "Invalid choice! Please enter a valid option.\n";
//        }
//    }
//
//    return 0;
//}
//

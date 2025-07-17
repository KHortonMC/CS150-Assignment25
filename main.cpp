#include <vector>
#include <iostream>
// #include "OpenSourceHardware.h"
// #include "Arduino.h"
// #include "RaspberryPi.h"

int main() {
    // Create new instances of our Arduino and RaspberryPi
    // Arduino* nano = new Arduino("Nano", 5, 21.16, "ATmega328");
    // Arduino* uno3 = new Arduino("UNO Rev 3", 5, 23.46, "ATmega328P");
    // RaspberryPi* model5 = new RaspberryPi("5 Model 8GB", 5, 80.00, "Raspbian");
    // RaspberryPi* model4 = new RaspberryPi("4 Model B", 5, 45.00, "Raspbian");

    // Create a Vector to hold the base class
    // this means it'll find any virtual and replace
    // vector<OpenSourceHardware*> inventory;

    // inventory.push_back(nano);
    // inventory.push_back(uno3);
    // inventory.push_back(model5);
    // inventory.push_back(model4);

    // we can have one interface to output many!
    // for (OpenSourceHardware* osh : inventory) {
    //     cout << *osh << "\n";
    // }

    // make sure to delete anything created by new!
    // for (OpenSourceHardware* osh : inventory) {
    //     delete osh;
    // }

    return 0;
}

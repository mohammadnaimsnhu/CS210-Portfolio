#include "ItemTracker.h"
#include <iostream>
#include <string>

int main() {
    ItemTracker tracker;

    // Load input file and create backup file
    tracker.loadFromFile("CS210_Project_Three_Input_File.txt");
    tracker.saveToFile("frequency.dat");

    int choice;
    do {
        std::cout << "\nCorner Grocer Item Tracker Menu:\n";
        std::cout << "1. Frequency of a specific item\n";
        std::cout << "2. List all items with frequencies\n";
        std::cout << "3. Histogram of item frequencies\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Input validation
        if (std::cin.fail() || choice < 1 || choice > 4) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid choice. Please enter 1-4.\n";
            continue;
        }

        std::cin.ignore(); // Clear newline for string input

        switch (choice) {
        case 1: {
            std::string item;
            std::cout << "Enter item name: ";
            std::getline(std::cin, item);
            int freq = tracker.getFrequency(item);
            std::cout << item << " appears " << freq << " times.\n";
            break;
        }
        case 2:
            tracker.printAllFrequencies();
            break;
        case 3:
            tracker.printHistogram();
            break;
        case 4:
            std::cout << "Exiting program. Goodbye!\n";
            break;
        }
    } while (choice != 4);

    return 0;
}
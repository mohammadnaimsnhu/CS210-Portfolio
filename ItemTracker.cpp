#include "ItemTracker.h"
#include <fstream>
#include <iostream>
#include <iomanip>

// Reads input file and counts item frequencies
void ItemTracker::loadFromFile(const std::string& filename) {
    std::ifstream infile(filename);
    if (!infile) {
        std::cerr << "Error: Cannot open input file: " << filename << std::endl;
        return;
    }

    std::string item;
    while (std::getline(infile, item)) {
        if (!item.empty()) {
            itemFrequency[item]++;
        }
    }

    infile.close();
}

// Saves item frequencies to frequency.dat for backup
void ItemTracker::saveToFile(const std::string& filename) {
    std::ofstream outfile(filename);
    if (!outfile) {
        std::cerr << "Error: Cannot create output file: " << filename << std::endl;
        return;
    }

    for (const auto& pair : itemFrequency) {
        outfile << pair.first << " " << pair.second << std::endl;
    }

    outfile.close();
}

// Returns frequency of a single item
int ItemTracker::getFrequency(const std::string& item) {
    if (itemFrequency.find(item) != itemFrequency.end()) {
        return itemFrequency[item];
    }
    return 0; // Item not found
}

// Prints all items and frequencies
void ItemTracker::printAllFrequencies() const {
    for (const auto& pair : itemFrequency) {
        std::cout << std::setw(12) << std::left << pair.first
            << pair.second << std::endl;
    }
}

// Prints histogram using asterisks
void ItemTracker::printHistogram() const {
    for (const auto& pair : itemFrequency) {
        std::cout << std::setw(12) << std::left << pair.first;
        for (int i = 0; i < pair.second; i++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
#pragma once
#ifndef ITEMTRACKER_H
#define ITEMTRACKER_H

#include <string>
#include <map>

class ItemTracker {
private:
    std::map<std::string, int> itemFrequency;  // Stores item counts

public:
    ItemTracker() = default;

    void loadFromFile(const std::string& filename);
    void saveToFile(const std::string& filename);
    int getFrequency(const std::string& item);
    void printAllFrequencies() const;
    void printHistogram() const;
};

#endif
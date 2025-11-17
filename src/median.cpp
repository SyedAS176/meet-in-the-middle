#include <fstream>
#include <sstream>
#include <stdexcept>
#include "median.hpp"

// Reads integers from a CSV file into a dynamic array
DynamicArray readCSV(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file: " + filename);
    }

    DynamicArray arr;
    std::string value;

    while (std::getline(file, value, ',')) { // Split on commas
        std::stringstream ss(value);
        int num;
        ss >> num;
        arr.add(num);
    }
    return arr;
}

// Computes the median of a dynamic array
double findMedian(const DynamicArray& arr) {
    int n = arr.size();
    if (n == 0) {
        throw std::runtime_error("No data points found.");
    }

    if (n % 2 == 1) {
        return arr.get(n / 2); // Middle element for odd size
    } else {
        return (arr.get(n/2 - 1) + arr.get(n/2)) / 2.0; // Average middle two for even size
    }
}
#pragma once
#include "dynamic_array.hpp"
#include <string>

// Read integers from a CSV file into a DynamicArray
DynamicArray readCSV(const std::string& filename);

// Compute the median of a DynamicArray
double findMedian(const DynamicArray& arr);
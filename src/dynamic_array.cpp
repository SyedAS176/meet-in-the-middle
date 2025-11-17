#include <stdexcept>
#include "dynamic_array.hpp"

// Default constructor
DynamicArray::DynamicArray() : data(nullptr), capacity(0), length(0) {}

// Destructor
DynamicArray::~DynamicArray() {
    delete[] data;  // Free up memory
}

// Resize the array when the capacity is reached
void DynamicArray::resize() {   // Resizes the dynamic array to allow more elements to be entered
    int newCapacity;

    if (capacity == 0) {    // Ensure capacity is at least 2; otherwise the dynamic array will not work as intended
        newCapacity = 2;
    } else {
        newCapacity = capacity * 2; // New dynamic array is twice as large as the old dynamic array
    }
    int* newData = new int[newCapacity];
    for (int i = 0; i < length; ++i) {
        newData[i] = data[i];   // Copy the element of the old array into the new larger array
    }
    delete[] data;  // Free up memory
    data = newData;
    capacity = newCapacity;
}

// Adds to the dynamic array
void DynamicArray::add(int value) {
    if (length >= capacity) {
        resize();   // Grow the array if it is full
    }
    data[length++] = value;
}

// Returns the length of the dynamic array
int DynamicArray::size() const {
    return length;
}

// Get element at index (throws if out of bounds)
int DynamicArray::get(int index) const {
    if (index < 0 || index >= length) {
        throw std::out_of_range("Index out of range.");
    }
    return data[index];
}
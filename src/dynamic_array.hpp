//  Since we are not allowed to use a dynamic array
//  We will just implement our own dynamic array
//  And resize it when it fills up

#pragma once

#include <stdexcept>

class DynamicArray {
private:
    int* data;      // Pointer to the dynamic array in memory
    int capacity;   // The allocated size of the dynamic array
    int length;     // Number of element currently in the dynamic array

    void resize();  // Resizes the dynamic array

public:
    DynamicArray(); // Constructor
    ~DynamicArray();// Deconstructor

    void add(int value);    // Adds and element to the dynamic array
    int size() const;       // Returns the current dynamic array length
    int get(int index) const;// Returns the current element at a specified index
};
#include <iostream>
#include <string>
#include "src/median.hpp"

int main() {
  std::string filename = "../data/numbers.csv";

  try {
    DynamicArray data = readCSV(filename);  // Read CSV into dynamic array
    double median = findMedian(data);       // Compute median
    std::cout << "The median of the dataset is " << median << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
  return 0;

  // -------> RUN THE CODE BLOCK BELOW IF YOU WANT TO ENTER YOUR OWN FILE PATH; COMMENT OUT THE CODE BLOCK ABOVE <-------
  // std::string userFileName;
  //
  // // Prompt the user for the filename
  // std::cout << "Enter the filename: ";
  // std::getline(std::cin, userFileName);
  //
  // try {
  //   DynamicArray data = readCSV(userFileName);
  //   double median = findMedian(data);
  //   std::cout << "The median of the dataset is " << median << std::endl;
  // } catch (const std::exception& e) {
  //   std::cerr << "Error: " << e.what() << std::endl;
  // }
  // return 0;
}
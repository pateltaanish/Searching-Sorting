//
//  sorting.hpp
//  Lab11
//
//  Created by Taanish Patel on 5/2/24.
//

#ifndef sorting_hpp
#define sorting_hpp

#include <string>

void bubbleSort(std::string& str);
void insertionSort(std::string& str);
void quickSort(std::string& str, int low, int high);
int partition(std::string& str, int low, int high);

#endif /* sorting_hpp */

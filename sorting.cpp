//
//  sorting.cpp
//  Lab11
//
//  Created by Taanish Patel on 5/2/24.
//

#include "sorting.hpp"
#include <algorithm>
using namespace std;

void bubbleSort(string& str) {
  bool swapped;
  for (int i = 0; i < str.length() - 1; i++) {
    swapped = false;
    for (int j = 0; j < str.length() - i - 1; j++) {
      if (str[j] > str[j + 1]) {
        swap(str[j], str[j + 1]);
        swapped = true;
      }
    }
    if (!swapped) {
      break;
    }
  }
}

void insertionSort(string& str) {
  int n = str.length();
  for (int i = 1; i < n; ++i) {
    char key = str[i];
    int j = i - 1;

    while (j >= 0 && str[j] > key) {
      str[j + 1] = str[j];
      j--;
    }
    str[j + 1] = key;
  }
}

void quickSort(string& str, int low, int high) {
  if (low < high) {
    int pi = partition(str, low, high);

    quickSort(str, low, pi - 1);
    quickSort(str, pi + 1, high);
  }
}

int partition(string& str, int low, int high) {
  char pivot = str[high];
  int i = (low - 1); 

  for (int j = low; j <= high - 1; j++) {
    if (str[j] <= pivot) {
      i++;
      swap(str[i], str[j]);
    }
  }
  swap(str[i + 1], str[high]);
  return (i + 1);
}

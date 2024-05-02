//
//  searching.cpp
//  Lab11
//
//  Created by Taanish Patel on 5/2/24.
//

#include "searching.hpp"
using namespace std;

int sequentialSearch(const vector<int>& list, int key) {
  for (int i = 0; i < list.size(); ++i) {
    if (list[i] == key) {
      return i;
    }
  }
  return -1;
}

int binarySearch(const vector<int>& list, int key) {
  int low = 0;
  int high = list.size() - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (list[mid] == key) {
      return mid;
    } else if (list[mid] < key) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

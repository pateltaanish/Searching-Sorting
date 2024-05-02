//
//  main.cpp
//  Lab11
//
//  Created by Taanish Patel on 5/2/24.
//

#include <iostream>
#include <string>
#include "searching.hpp"
#include "sorting.hpp"

using namespace std;

int main() {
  int choice;
  cout << "Enter (1) for Sequential Search or (2) for Binary Search: ";
  cin >> choice;

  if (choice == 1) {
    vector<int> list;
    int key;
    cout << "Enter a list of integers (separated by spaces, enter 0 to finish): ";
    int num;
    while (cin >> num && num != 0) {
      list.push_back(num);
    }
    cout << "Enter the key element to search: ";
    cin >> key;
    int position = sequentialSearch(list, key);
    if (position != -1) {
      cout << "Key element " << key << " found at position " << position << endl;
    } else {
      cout << "Key element " << key << " not found in the list." << endl;
    }
  } else if (choice == 2) {
    vector<int> list;
    int key;
    cout << "Enter a sorted list of integers (separated by spaces, enter 0 to finish): ";
    int num;
    while (cin >> num && num != 0) {
      list.push_back(num);
    }
    cout << "Enter the key element to search: ";
    cin >> key;
    int position = binarySearch(list, key);
    if (position != -1) {
      cout << "Key element " << key << " found at position " << position << endl;
    } else {
      cout << "Key element " << key << " not found in the list." << endl;
    }
  } else {
    cout << "Invalid choice." << endl;
  }

  string choice2;
  cout << "\nEnter (1) for Bubble Sort, (2) for Insertion Sort, or (3) for Quick Sort: ";
  cin >> choice2;

  if (choice2 == "1") {
    string inputString;
    cout << "Enter a string to sort: ";
    cin >> inputString;
    bubbleSort(inputString);
    cout << "Sorted string: " << inputString << endl;
  } else if (choice2 == "2") {
    string inputString;
    cout << "Enter a string to sort: ";
    cin >> inputString;
    insertionSort(inputString);
    cout << "Sorted string: " << inputString << endl;
  } else if (choice2 == "3") {
    string inputString;
    cout << "Enter a string to sort: ";
    cin >> inputString;
    quickSort(inputString, 0, inputString.length() - 1);
    cout << "Sorted string: " << inputString << endl;
  } else {
    cout << "Invalid choice." << endl;
  }

  return 0;
}

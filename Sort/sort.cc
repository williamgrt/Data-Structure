//
// Created by 郭睿韬 on 2020/4/28.
//

#include "QuickSort.h"
#include "MergeSort.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> nums;
  /*
  srand(static_cast<unsigned int>(time(nullptr)));
  for (int i = 0; i < 63; ++i) {
    nums.push_back(rand() % 100);
  }

  quickSort(nums);
  for (auto num: nums) {
    cout << num << ' ';
  }

  nums.clear();
   */
  srand(static_cast<unsigned int>(time(nullptr)));
  for (int i = 0; i < 63; ++i) {
    nums.push_back(rand() % 100);
  }

  MergeSort(nums);
  for (auto num: nums) {
    cout << num << ' ';
  }

  return 0;
}

//
// Created by 郭睿韬 on 2020/4/28.
//

#ifndef SORT_SORT_QUICKSORT_H_
#define SORT_SORT_QUICKSORT_H_

#include <vector>

int partition(std::vector<int>& nums, int begin, int end) {
  int guard = nums[begin];
  int i = begin, j = end + 1;
  while (true) {
    while (nums[++i] <= guard) {
      if (i > end) break;
    }
    while (nums[--j] >= guard) {
      if (j == begin) break;
    }
    if (i >= j) break;
    std::swap(nums[i], nums[j]);
  }
  std::swap(nums[begin], nums[j]);
  return j;
}

void quickSort(std::vector<int>& nums, int begin, int end) {
  if (begin >= end) {
    return;
  }
  int j = partition(nums, begin, end);
  quickSort(nums, begin, j - 1);
  quickSort(nums, j + 1, end);
}

void quickSort(std::vector<int>& nums) {
  quickSort(nums, 0, nums.size() - 1);
}

#endif //SORT_SORT_QUICKSORT_H_

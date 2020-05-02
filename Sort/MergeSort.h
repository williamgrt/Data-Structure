//
// Created by 郭睿韬 on 2020/4/29.
//

#ifndef SORT_SORT_MERGESORT_H_
#define SORT_SORT_MERGESORT_H_

#include <vector>

void merge(std::vector<int>& nums, int begin, int mid, int end) {
  auto aux = nums;
  int i = begin, j = mid + 1, total = end - begin + 1;
  for (int k = 0; k < total; ++k) {
    if (i > mid) nums[begin + k] = aux[j++];
    else if (j > end) nums[begin + k] = aux[i++];
    else if (aux[i] < aux[j]) nums[begin + k] = aux[i++];
    else nums[begin + k] = aux[j++];
  }
}

void mergeSort(std::vector<int>& nums, int begin, int end) {
  if (begin >= end) {
    return;
  }
  int mid = begin + (end - begin) / 2;
  mergeSort(nums, begin, mid);
  mergeSort(nums, mid + 1, end);
  merge(nums, begin, mid, end);
}

void MergeSort(std::vector<int>& nums) {
  mergeSort(nums, 0, nums.size() - 1);
}

#endif //SORT_SORT_MERGESORT_H_

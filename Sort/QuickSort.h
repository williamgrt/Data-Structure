//
// Created by 郭睿韬 on 2020/4/28.
//

#ifndef SORT_SORT_QUICKSORT_H_
#define SORT_SORT_QUICKSORT_H_

#include <vector>

int partition(std::vector<int>& nums, int begin, int end) {

}

void quickSort(std::vector<int>& nums, int begin, int end) {
  if (begin >= end) {
    return;
  }
  int j = partition(nums, begin, end);
  quickSort(nums, begin, j - 1);
  quickSort(nums, j, end);
}

void quickSort(std::vector<int>& nums) {

}

#endif //SORT_SORT_QUICKSORT_H_

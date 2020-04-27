//
// Created by 郭睿韬 on 2020/4/27.
//

#ifndef DATA_STRUCTURE_HEAP_MAXQUEUE_H_
#define DATA_STRUCTURE_HEAP_MAXQUEUE_H_

#include <algorithm>
class MaxQueue {
 public:
  MaxQueue(int N) {
    data = new int[N + 1];
    capacity = N;
    count = 0;
  }

  ~MaxQueue() {
    delete[] data;
  }

  bool empty() {
    return count == 0;
  }

  void push(int value) {
    data[++count] = value;
    swim(count);
  }

  int top() {
    return data[1];
  }

  void pop() {
    std::swap(data[1], data[count--]);
    sink(1);
  }

 private:
  int *data;
  int capacity;
  int count;

  /*
   * 由下到上的堆有序化
   */
  void swim(int k) {
    while (k > 1 && data[k] > data[k /2]) {
      std::swap(data[k], data[k / 2]);
      k /= 2;
    }
  }

  /*
   * 由上到下的堆有序化
   */
  void sink(int k) {
    while (2 * k <= count) {
      int j = 2 * k;
      if (j < count && data[j] < data[j+ 1]) {
        j = j + 1;
      }
      if (data[k] >= data[j]) {
        break;
      }
      std::swap(data[j], data[k]);
      k = j;
    }
  }
};

#endif //DATA_STRUCTURE_HEAP_MAXQUEUE_H_

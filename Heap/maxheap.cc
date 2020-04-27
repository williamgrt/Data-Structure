//
// Created by 郭睿韬 on 2020/4/27.
//

#include "MaxQueue.h"
#include <iostream>

int main() {
  MaxQueue pq(100);

  srand(static_cast<unsigned int>(time(nullptr)));

  for (int i = 0; i < 63; ++i) {
    pq.push(rand() % 100);
  }
  while (!pq.empty()) {
    std::cout << pq.top() << ' ';
    pq.pop();
  }

  return 0;
}


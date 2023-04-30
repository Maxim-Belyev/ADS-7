// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
#include <list>
template<class T>
class TPQueue {
 private:
    std::list <T> TPQueue;

 public:
    T pop() {
        T el = LIST.front();
        TPQueue.pop_front();
        return el;
    }
    void push(const T& value) {
        if (TPQueue.empty()) {
            TPQueue.push_back(value);
        } else {
            bool x = true;
            for (auto i = TPQueue.begin(); i != TPQueue.end(); i++) {
                if (value.prior > (*i).prior) {
                    TPQueue.insert(i, value);
                    x = false;
                    break;
            }
         }
            if (x) {
                TPQueue.push_back(value);
            }
        }
    }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUEH_


#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
    for(auto &l : ls){
        if (l.mSize > 0){
            l.mHeader->next->prev = mHeader->prev;
            mHeader->prev->next = l.mHeader->next;
            l.mHeader->prev->next = mHeader;
            mHeader->prev = l.mHeader->prev;
            //l.clear();
            l.mHeader->prev = l.mHeader;
            l.mHeader->next = l.mHeader;
            mSize += l.mSize;
            l.mSize = 0;
        }
    }
}

#endif

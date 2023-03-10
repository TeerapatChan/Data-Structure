#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  //write your code here
  if (other.size() != size()) return false;
  priority_queue<T,Comp> temp1(*this);
  priority_queue<T,Comp> temp2(other);
  while(!temp1.empty()){
    if (temp1.top() != temp2.top()) return false;
    temp1.pop();
    temp2.pop();
  }
  return true; // you can change this line
}

#endif

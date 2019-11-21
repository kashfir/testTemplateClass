#include "List.h"



template<typename T> inline T setZero_part(){return 0;}
template<> inline string setZero_part<string>(){return "";}
template<> inline myType setZero_part<myType>(myType val){
     val.infoStr1 = "";
     val.infoDbl = 0;
     val.infoStr2 = "";
  return val;
}

template <class T> T List<T>::setZero(){
  T val;
   val = setZero_part<T>();
  return val;
}




template class List<string>;
template class List<myType>;

#ifndef LOG_H
#define LOG_H
#include "List.cpp"


class Log {
  class myType{
  public:
    string infoStr1;
    double infoDbl;
    string infoStr2;
  };
  List<myType> log;
public:
  void blank();
};


#endif

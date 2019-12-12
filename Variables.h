//
// Created by tal on 12.12.2019.
//

#ifndef SIMULATOR__VARIABLES_H_
#define SIMULATOR__VARIABLES_H_
#include <unordered_map>
#include "string"
#include "Var.h"
// a singleton class
class Variables {
 private:
  unordered_map<string, Var> map;
  static Variables *instance;
 public:
  //check if the object is already exists, if not,make a new one, else return the last one.
  static Variables *getInstance() {
    if (!instance)
      instance = new Variables;
    return instance;
  }
  void setVar(string v, Var var) {
    map[v] = var;
  }
  unordered_map<string, Var> getMap() {
    return this->map;
  }
  Var &getVar(string v) {
    return map[v];
  }
 protected:
  virtual ~Variables() {};
};

#endif //SIMULATOR__VARIABLES_H_
#include "lib.h"
bool numprimo (inta, int i){
  if (a% i == 0){
    if (a == i){
      return true;
    }
    else{
      return false;
    }
  }
  numprimo (a, i + 1);
}

#include <iostream> 
#include "BrazoRobotico.h"

using namespace std;

int main(){
  BrazoRobotico r(0, 0, 0, false);
  r.mover(1, 1, 1);
  r.coger();
  
  return 0;
}

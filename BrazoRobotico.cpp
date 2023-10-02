#include <iostream> 
#include "BrazoRobotico.h"

using namespace std;

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool object){
  this->x = x;
  this->y = y;
  this->z = z;
  this->object = object;
} 

double BrazoRobotico::getX(){
  return x;
}

double BrazoRobotico::getY(){
  return y;
}

double BrazoRobotico::getZ(){
  return z;
}

bool BrazoRobotico::getObject(){
  return object;
}

void BrazoRobotico::coger(){
  object = true;
  cout << "Objeto cogido con éxito" << endl;
}

void BrazoRobotico::soltar(){
  object = false;
  cout << "Objeto soltado con éxito" << endl;
}

void BrazoRobotico::mover(double newX, double newY, double newZ){
  cout << "Posición original: (" << x << ", " << y << ", " << z << ")" << endl;
  x = newX;
  y = newY;
  z = newZ;
  cout << "Nueva posición: (" << newX << ", " << newY << ", " << newZ << ")" << endl;
}

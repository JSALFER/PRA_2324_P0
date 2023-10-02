#include <iostream> 

using namespace std; 

class BrazoRobotico{
private: 
  double x;
  double y;
  double z;
  bool object;
public: 
  BrazoRobotico(double x, double y, double z, bool object);
  double getX();
  double getY();
  double getZ();
  bool getObject();
  void coger();
  void soltar();
  void mover(double newX, double newY, double newZ);
};

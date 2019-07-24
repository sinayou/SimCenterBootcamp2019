#ifndef _TRAPIZOID
#define _TRAPIZOID

#include "Shape.h"

class Trapizoid: public Shape {
 public:
  Trapizoid(double w1,double w2, double h);
  ~Trapizoid();
  double GetArea(void);
  void PrintArea(std::ostream &s);  

 protected:

 private:
  double width1, width2, height;
  static int numTrapz;
};

#endif // _TRAPIZOID

  

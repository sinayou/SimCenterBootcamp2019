#include <Trapz.h>

int Trapizoid::numTrapz = 0;

Trapizoid::~Trapizoid() {
  numTrapz--;
  std::cout << "Trapizoid Destructor\n";
}

Trapizoid::Trapizoid(double w1,double w2, double d)
  :Shape(), width1(w1), width2(w2) , height(d)
{
  numTrapz++;
}

double
Trapizoid::GetArea(void) {
  return (width1+width2)*height/2.0;
}

void 
Trapizoid::PrintArea(std::ostream &s) {
  s << "Trapizoid: " << (width1+width2)*height/2.0 << " numTrapz: " << numTrapz << "\n";
}


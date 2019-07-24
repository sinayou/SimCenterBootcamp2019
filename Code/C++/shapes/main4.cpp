//#include "Rectangle.h"
#include "Circle.h"
#include "Trapz.h"

#include <list>
#include <vector>

typedef std::list<Shape*> Container;
//typedef std::vector<Shape*> Container;

typedef Container::iterator Iter;

int main(int argc, char **argv) {
  Container theShapes;

  Circle s1(2.0);
  Shape *s2 = new Trapizoid(1.0,3.0, 2.0);
//  Shape *s3 = new Rectangle(3.0,2.0);
  Shape *s4 = new Trapizoid(5.0,3.0, 7.0);

  
  theShapes.push_front(&s1);
  theShapes.push_front(s2);
 // theShapes.push_front(s3);
  theShapes.push_front(s4);

  Iter it;  
  for (it = theShapes.begin(); it != theShapes.end(); it++) {
    (*it)->PrintArea(std::cout);
  //  (*it)->std::ofstream outfile ("new.txt",std::ofstream::binary);
  }

  return 0;
}



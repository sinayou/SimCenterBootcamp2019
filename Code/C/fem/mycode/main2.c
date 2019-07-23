#include "node.h"
#include "domain.h"
#include "force.h"

int main(int argc, char **argv) {
  Domain theDomain;
  theDomain.theNodes=0;
  theDomain.theForces=0;

  domainAddNode(&theDomain, 1, 0.0, 0.0,1,1,0);
  domainAddNode(&theDomain, 2, 1.0, 0.0,1,1,0);
  domainAddNode(&theDomain, 3, 2.0, 0.0,1,1,1);
  domainAddNode(&theDomain, 4, 1.0, 1.0,1,1,1);

  domainAddForce(&theDomain,1,4,10.0,5.0,0.0);
  
  domainPrint(&theDomain);

  // get and print singular node
  printf("\nsingular node:\n");
  Node *theNode = domainGetNode(&theDomain, 2);
  nodePrint(theNode);
}

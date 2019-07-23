#include "node.h"
#include "force.h"

typedef struct struct_domain {
  Node *theNodes;
  Force *theForces;
} Domain;

void domainPrint(Domain *theDomain);
void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2, int cs1, int cs2, int cs3);
void domainAddForce(Domain *theDomain, int forcetag, int nodetag, double amp1, double amp2, double amp3);
void domainPrintNodes(Domain *theDomain);
void domainPrintForces(Domain *theDomain);

Node *domainGetNode(Domain *, int nodeTag);


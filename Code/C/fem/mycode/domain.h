#include "node.h"

typedef struct struct_domain {
  Node *theNodes;
} Domain;

void domainPrint(Domain *theDomain);
void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2, int cs1, int cs2, int cs3);
void domainPrintNodes(Domain *theDomain);
Node *domainGetNode(Domain *, int nodeTag);


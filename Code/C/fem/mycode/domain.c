#include <stdio.h>
#include <stdlib.h>
#include "domain.h"
#include "node.h"
#include "force.h"

void domainPrint(Domain *theDomain) {
  printf("The Nodes:\n");
  domainPrintNodes(theDomain);
  printf("The Forces:\n");
  domainPrintForces(theDomain);

}

void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2, int cs1, int cs2, int cs3) {
  Node *theNextNode = (Node *)malloc(sizeof(Node));
  nodeSetup(theNextNode, tag, crd1, crd2, cs1, cs2, cs3);

  if (theDomain->theNodes != NULL) {
    theNextNode->next = theDomain->theNodes;
  } else {
    theNextNode->next = NULL;
  }
  theDomain->theNodes = theNextNode;
}

void domainPrintNodes(Domain *theDomain) {
  Node *theCurrentNode = theDomain->theNodes;
  while (theCurrentNode != NULL) {
    nodePrint(theCurrentNode);
    theCurrentNode = theCurrentNode->next;
  };
}

Node *domainGetNode(Domain *theDomain, int nodeTag) {
  Node *theCurrentNode = theDomain->theNodes;
  while (theCurrentNode != NULL) {
    if (theCurrentNode->tag == nodeTag) {
      return theCurrentNode;
    } else {
      theCurrentNode = theCurrentNode->next;
    }
  };
  return NULL;
}


/// Defining forces 


void domainAddForce(Domain *theDomain, int forcetag, int nodetag, double amp1, double amp2, double amp3) {
  Force *theNextForce = (Force *)malloc(sizeof(Force));
  forceSetup(theNextForce, forcetag, nodetag, amp1, amp2, amp3);

  if (theDomain->theForces != NULL) {
    theNextForce->next = theDomain->theForces;
  } else {
    theNextForce->next = NULL;
  }
  theDomain->theForces = theNextForce;
}

void domainPrintForces(Domain *theDomain) {
  Force *theCurrentForce = theDomain->theForces;
  while (theCurrentForce != NULL) {
    forcePrint(theCurrentForce);
    theCurrentForce = theCurrentForce->next;
  };
}

//Force *domainGetForce(Domain *theDomain, int forceeTag) {
//  Force *theCurrentForce = theDomain->theForces;
//  while (theCurrentForce != NULL) {
//    if (theCurrentForce->tag == forceeTag) {
//      return theCurrentForce;
//    } else {
//      theCurrentForce = theCurrentForce->next;
//    }
//  };
//  return NULL;
//}

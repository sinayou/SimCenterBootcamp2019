#ifndef _NODE
#define _NODE 

#include <stdio.h>

typedef struct node {
  int tag;
  double coord[2];
  double disp[3];
  int constraint[3];
  struct node *next;
} Node;

void nodePrint(Node *);
void nodeSetup(Node *, int tag, double crd1, double crd2, int cs1, int cs2, int cs3);

#endif

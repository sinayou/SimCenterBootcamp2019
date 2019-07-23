#ifndef _FORCE
#define _FORCE

#include <stdio.h>

typedef struct force {
  int fTag;
  int nTag;
  double amp[3];
  struct force *next;
} Force;

void forcePrint(Force *);
void forceSetup(Force *, int forcetag, int nodetag, double amp1, double amp2, double amp3);

#endif

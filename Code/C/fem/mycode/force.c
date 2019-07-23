#include <stdio.h>
#include "force.h"

void forcePrint(Force *theForce){
  printf("Node ID : %d ", theForce->nTag);
  printf("Force ID: %d ", theForce->fTag);
  printf("Amplitudes: %f %f %f\n", theForce->amp[0], theForce->amp[1], theForce->amp[2]);
 // printf("Constraint: %d %d %d \n", theNode->amp[0], theNode->amp[1], theNode->amp[2]);
}

void forceSetup(Force *theForce, int forcetag, int nodetag, double amp1, double amp2, double amp3){
  theForce->nTag = nodetag;
  theForce->fTag = forcetag;
  theForce->amp[0] = amp1;
  theForce->amp[1] = amp2;
  theForce->amp[2] = amp3;
  theForce->next = NULL;
}

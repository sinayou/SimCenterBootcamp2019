#include <stdio.h>
#include <math.h>

static int long numSteps=10000000;
int main() {

double pi=0; double time=0;

//my code

double deltax;
deltax=1.0/numSteps;

for (int i=0; i<numSteps; i++) {

double fx, ff;
ff=((i)*deltax);
fx=ff*ff;
pi +=deltax*(4/(1+fx));
}

printf("PI= %f, duration: %f ms\n",pi,time);

return 0;

}

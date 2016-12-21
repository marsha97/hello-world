/*selisih maju
 * f(x) = e^-x sin(2x)+1
 * f'(x) eksak = (-e^-x sin(2x) + e^-x 2 cos (2x))
*/
#include <math.h>
#include <stdio.h>
main(){
	float a,b,h,x,turunan,eksak,fx,error,c;
	int n,i;
	x = 0;
	h = 0.1;
	printf("%f\n", -(exp(-x))*3*sin(2*x))+(4*cos(2*x));
	printf("%f\n",x-2*h);
}

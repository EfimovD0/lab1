#include <stdio.h>
#include <math.h>

double get_min(double a, double b){
	if (a<=b){
		return a;
	}
	else{
		return b;
	}
}

int main(){
	double x, y, V;
	double hx=0.6;
	double hy=0.7;

	for (x=0.0; x<=1.0; x+=hx){
		for (y=1.0; y<=2.0; y+=hy){
			if ((x+y) <= 2.0){

				double term1 = pow(fabs(cos(x)), y);
				double term2 = pow(x + 6.0, 1.0/5.0);
				V=get_min(term1,term2);

			}
			else{
				V = (x*x) + (x*y*y);
			}
			printf("x = %.1f, y = %.1f, x+y = %.1f, V = %.6f\n", x, y, x+y, V);
		}
	}
	return 0;
}

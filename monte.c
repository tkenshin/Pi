#include <stdio.h>
#include <math.h>

void MonteCarlo(int n);

int main(void) {

	int a = 1000;

	MonteCarlo(a);

	return 0;
}

void MonteCarlo(int n) {
	int i;
	const double a = (sqrt(5) - 1) / 2;
	double x, sum;

	x = sum = 0;

	for(i = 0; i < n; i++) {
		if((x += a) >= 1){
			x--;	
		}
		sum += sqrt(1 - x * x);
	}
		
	printf("pi = %f\n", 4 * sum / n);

}

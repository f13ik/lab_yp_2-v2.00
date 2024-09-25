#include <stdio.h>
// #include <math.h>

 double dfac( double n){
    if (n > 1)
        return n * dfac(n - 2);
    return 1;
}
double powe(double base, int power)
{
	double result = 1;
	int k = 0;
	while (k < power)
	{
		result *= base;
		k++;
	}
	return result;
}
double t(double x){
     double summ1, summ2 = 0.; 
    for (int k = 0; k <= 10; k++){
        summ1 += ( powe(x, 2*k + 1) / dfac(2*k+1));
        summ2 += ( powe(x, 2*k) / dfac(2*k));
    }  
    return summ1 / summ2;
}

double fun( double y){
    double a = (7 * t(0.25) + 2 * t(1 + y));
    double b = (6 - t(powe(y,2) - 1));
    double c = a/b;
    return (c);
}
 
int main(void)
{
    float k = 1;
    while (k != 404) {
        printf("num: ");
        scanf("%f", &k);
        double a = (7 * t(0.25) + 2 * t(1 + k));
        double b = (6 - t(powe(k,2) - 1));
        double c = a/b;
        printf("a: %f \n", a);
        printf("b: %f \n", b);
        printf("kkkk: %f,\t %f,\t %f \n", powe(k,2),t(powe(k,2) - 1),(6 - t(powe(k,2) - 1)));
        printf("c: %f \n", c);
    }

    
    return 0;
}
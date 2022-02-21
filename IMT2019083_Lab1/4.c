#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a,&b,&c); 
	double D = b*b - 4*a*c;
	if (D >= 0)
		printf("%.2lf %.2lf\n", (-b + sqrt(D))/(2*a), (-b - sqrt(D))/(2*a));

	else if 
		(D < 0)  printf("%.2lf+i%.2lf %.2lf-i%.2lf\n", -b/(2*a), sqrt(-D)/(2*a), -b/(2*a), sqrt(-D)/(2*a));
}



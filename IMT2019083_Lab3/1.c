/*The program determines whether two circles with input integer coordinates and radii intersect or not */

#include <stdio.h>
#include <math.h>

int main()


{/* (xi, yi) are the coordinates of the center of circle Ci where i is {1, 2} */

int x1, y1, x2, y2, r1, r2;

scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &r1, &r2);

/* For intersection, the distance between centres of C1 and C2 must be less than r1 + r2, and more than r1 - r2.
Distance formula for two points with k1 and k2 as coordinate vectors is |k1 - k2|  */

if (r1 < 0 || r2 < 0)/*Radii may not be less than zero*/
	{printf("Invalid input"); }

else if ((pow(r1 - r2, 2) <= pow(x1 - x2, 2) + pow(y1 - y2, 2) && pow(x1 - x2, 2) + pow(y1 - y2, 2) <= pow(r1 + r2, 2)) && (x1 != x2 || y1 != y2))/*Evaluation for real values of radii*/
	{printf("YES");}

else /*If the condition is not satisfied, then no intersection occurs*/
	{printf("NO");}

return 0;}

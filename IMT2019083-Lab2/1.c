#include <stdio.h>
#include <stdlib.h>

int main()

{int a, b;
scanf("%d \n %d", &a, &b);

 a = abs(a);
 b = abs(b);
         

if (a == 0 && b == 0)
	printf("Invalid input");

else if (a == 0)
	printf("%d", abs(b));

else if (b == 0)
	printf("%d", abs(a));

else if (a == b)
	printf("%d", abs(a));

else
	{while (a != b)
		{if (a > b)
			{a = a - b;
			 continue;}
		 else if (b > a)
			 {b = b - a;
			  continue;}}
		 
              printf("%d", a);}	


return 0;}

        

#include <stdio.h>
int main()

{int n, p, i, r ;

scanf("%d", &n);
if (n <= 1)
	printf("%d", 0);

else if (n > 1)

     {i = 0;
      r = 3;
      p = 2;
	while (p < n && r > p && r <= n)
		{if (r % p == 0)
			{
			++r; p = 2; continue;}
		 
		 else if (r % p != 0 && p < r - 1)
			{++p; continue;}

		 else 
			{
			  ++i; ++r; p = 2;}}

printf("%d", i + 1);}
return 0;}


			  
			 

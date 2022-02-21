
#include <stdio.h>

int main() 

{ float r, AREA;
  
   scanf("%f", &r);
   AREA = 3.14*r*r;
    
   if (r >= 0) {printf("%.2f\n", AREA);}

   else printf("Invalid input");
return 0;
}

  


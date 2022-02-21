#include <stdio.h>

int main()


{
int a, b;





scanf("%d", &a);


scanf("%d", &b);

 if ((a<=0) || (b<=0))
printf("Invalid input");


else if (a<b) 
printf("%d", b%a);

else if (a>b)  
printf("%d", a%b);




else if (a=b)  
printf("0");


return 0;

}


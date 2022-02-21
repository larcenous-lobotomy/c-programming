#include <stdio.h>
//C program for Linear Search
int main()
{int array[10];   //Declaring the input array
int x, i, count = 0;  //Declaring the search variable and the loop counter, and initialising the count variable that will tell us the number of comparisons

scanf("%d , %d, %d, %d, %d, %d, %d, %d, %d, %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5], &array[6], &array[7], &array[8], &array[9], &x);

for (i = 0; i < 10; ++i)     //This loop conducts linear search
   {if (x == array[i])                  //if an element of the array is equal to the search item, the loop is terminated after printing output.
		 {printf("%d %d", 1, ++count); 
		 return 0;}

    else //if search is not equal to the array element and count < 10(the only remaining case), the count is incremented
		{++count;}}
//these statements will be executed only if the program is still running, meaning search does not lie in the array
printf("%d %d", 0, count);
return 0;}

		 

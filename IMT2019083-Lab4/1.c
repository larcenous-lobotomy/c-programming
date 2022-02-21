#include <stdio.h>

int main()
{int array[10]; //Declaring the array that shall hold the input elements

scanf("%d , %d, %d, %d, %d, %d, %d, %d, %d, %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5], &array[6], &array[7], &array[8], &array[9]);

int i = 0;       //This block copies elements from the input array to the output array in a complementary order, yielding a reversed array
int output[10];
for (i = 0; i < 10; ++i) 
	{output[i] = array[9 - i];}

for (i = 0; i < 10; ++i)      //This block prints all the elements of the output array
	{printf("%d ", output[i]);}

return 0;}

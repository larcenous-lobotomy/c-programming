#include <stdio.h>
//Binary Search using loop 

int main(void)//main can be called out without arguments, hence void  
{ int array[10]; //input array
  int search; //search item
  int left = 0, right = 9, mid = 4, count = 0; //initialising the left and right bounds, the mid variable, and the counter for number of comparisons
    scanf("%d , %d, %d, %d, %d, %d, %d, %d, %d, %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5], &array[6], &array[7], &array[8], &array[9], &search);
       
    while (right >= left) //loop test condition - right bound must always have an index >= left bound in the array
        {mid = (right + left) / 2; //in every iteration, the mid variable is redefined by this formula
  
        if (array[mid] == search) //the program execution is ended if a match happens, after printing output
                {printf("%d %d", 1 , ++count);
                return 0;}
                                       //otherwise, the bounds are redefined according to the inequality sign, and the count is incremented
        else if (array[mid] > search) 
		{++count;
                right = mid - 1;} 
  
        else 
	        {++count;            
		left = mid + 1;} 
        } 
        //these two statements outside the while loop are executed iff the program is still running, meaning search is not a part of array
        printf("%d %d", 0, count);
        return 0;}

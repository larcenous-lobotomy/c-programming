//Selection Sort
#include <stdio.h>
//global variables
int swap_count = 0;//stores the number of swaps
int comparison_count = 0;//stores the number of comparisons

//MAIN
void selection_sort(int);
int main()
{
selection_sort(20);//control passes to selection_sort function
printf("\n%d %d", swap_count, comparison_count);
}

//SELECTION SORT
void swap(long long int *, long long int *);//prototype declaration for swap in selection_sort
void selection_sort(int n)
{
long long int array[n];
int minimum_index;//stores the least number in the subarray

//This loop inputs all elements of an array of length given in function argument
for (int i = 0; i < n; ++i)
{    
scanf("%lld,", &array[i]);
} 

 //selection sorting   
for (int k = 0; k < n-1; k++) 
    {
        minimum_index = k;
        for (int i = k + 1; i < n; i++) 
        {
            if (array[minimum_index] > array[i])
                {
                minimum_index = i;
                }
            ++comparison_count;
        }
    
        swap(&array[k], &array[minimum_index]);
        ++swap_count;
    }
        
for (int i = 0; i < n; ++i)
    {printf("%lld ", array[i]);}      
    
}

//SWAP
void swap(long long int *x, long long int *y )//swaps two variables by swapping their addresses
{int t;
t = *x;
*x = *y;
*y = t;
}

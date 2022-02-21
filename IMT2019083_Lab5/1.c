#include <stdio.h>

//global variables
int swap_count = 0, comparisons = 0;
int n = 20; //size of array (fixed as 20)

void bubble_sort(long long int *);
void swap(long long int *, long long int *);
int main()
{
long long int array[n];  

for (int i = 0; i < n; ++i)
    scanf("%lld,", &array[i]); 

bubble_sort(array);

for (int i = 0; i < n; ++i)
    {printf("%lld ", array[i]);} 

printf("\n%d %d", swap_count, comparisons);
}

//SWAP
void swap(long long int *x, long long int *y)//function to swap two elements by swapping their addresses
{long long int t;
t = *x;
*x = *y;
*y = t;}

//BUBBLE SORT
void swap(long long int *, long long int *);//prototype declaration for swap
void bubble_sort(long long int * array)
{
for (int j = 0; j < n - 1; ++j)
    {
    //because all elements of index >= k - 1 have already been placed 
    for (int i = 0; i < n - j - 1; ++i) 
        {
            if (array[i] > array[i + 1])
            {
            swap(&array[i], &array[i + 1]);
            ++swap_count;
            }
        ++comparisons;
        }
        
    }   
}

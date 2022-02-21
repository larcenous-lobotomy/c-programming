//Quick Sort
//The pivot is the last element of the array or subarray by default
#include <stdio.h>

//MAIN
void quick_sort(long long int *, int, int);
int main()
{int n;
scanf("%d", &n);//input length of array

long long int array[n];//initialising array of that size
int i; //i stands for index

for (i = 0; i < n; ++i) //scanning all the elements of the array
    scanf("%lld,", &array[i]);
        
long long int pivot = array[n - 1];

quick_sort(array, 0, n - 1);//calling the quick_sort function

for (i = 0; i < n; ++i) //printing all the elements of the array
    {printf("%lld ", array[i]);}

for (i = 0; i < n; ++i) //prints the new index of the pivot in sorted array
    {if (array[i] == pivot)
        {
        printf("\n%d", i);
        break;
        }
    }

return 0;}

//SWAP
void swap(long long int *x, long long int *y )
{int t;
t = *x;
*x = *y;
*y = t;}

//RECURSIVE QUICK SORT
int partition(long long int *, int, int);
void quick_sort(long long int arr[], int left, int right) //recursive quick sort function
{if (left < right)
    {int p;//partition index
    p = partition(arr, left, right);
    quick_sort(arr, left, p - 1);
    quick_sort(arr, p + 1, right);
    }
}

//PARTITION
void swap(long long int *, long long int *);
int partition(long long int arr[], int left, int right) //separates the subarray into 3 parts - elements less than pivot, pivot and elements more than pivot
{int pivot = arr[right];    // pivot 
int pivot_index = left;  //incremented every time a number less than pivot is found in the linear comparison

//Partitioning the subarray in linear time  
for (int i = left; i < right; ++i) 
    {
    if (arr[i] < pivot) 
        swap(&arr[pivot_index++], &arr[i]);   
    }

//placing the pivot at its correct place    
swap(&arr[pivot_index], &arr[right]); 

return pivot_index; 
}


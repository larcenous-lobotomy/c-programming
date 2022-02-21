//Merge Sort
#include <stdio.h>
//global variables
int merges = 0;//number of times MERGE function is called

//MAIN
void merge_sort(long long int *, int, int);
int main()
{int n;
scanf("%d\n", &n);
long long int array[n];

for (int i = 0; i < n; ++i)
    scanf("%lld,", &array[i]);
           
merge_sort(array, 0, n - 1);

for (int i = 0; i < n; ++i)
    {printf("%lld ", array[i]);}

printf("\n%d", merges);

return 0;}

//MERGE
void merge(long long int arr[], int l, int mid, int r ) 
{//index for temp array
int  k = 0; 
//temp array to store merge sorted subarray   
long long int temp[r - l + 1]; 

//merge sort algorithm  
int i = l; 
int j = mid + 1;  
while (i <= mid && j <= r) 
    { 
        if (arr[i] <= arr[j]) 
        { 
            temp[k++] = arr[i++]; 
             
        } 
        else
        { 
            temp[k++] = arr[j++]; 
            
        } 
        
    } 
//any leftover elements from the first and second half of subarray are added to temp  
while (i <= mid) 
    {
    temp[k++] = arr[i++]; 
    }

while (j <= r)
    {
    temp[k++] = arr[j++];
    }

//reassigning subarray to temp
for (i = 0; i < r - l + 1; ++i)
        {arr[i + l] = temp[i];}
//incrementing the merge count for every iteration of merge
++merges;
}    

//MERGE SORT
void merge(long long int *, int, int, int);
void merge_sort(long long int arr[], int l,int r) 
{if (l < r)
    {int mid = (l + r) / 2;
    //sorting the subarrays separately
    merge_sort(arr, l, mid); 
    merge_sort(arr, mid + 1, r);
    merge(arr, l, mid, r);
    }
}
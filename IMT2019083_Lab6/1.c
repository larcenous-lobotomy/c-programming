#include <stdio.h>
#include <stdlib.h>

int main()
{//size of dynamic memory
int n;
scanf("%d ", &n);

//memory allocation using malloc
int *ptr = (int *)malloc(n * sizeof(int));

//scanning all elements
for (int i = 0; i < n; ++i){
    scanf("%d", &ptr[i]);
}

//printing the elements within dynamic memory
for (int i = 0; i < n; ++i){
    printf("%d ", ptr[i]);
}

//clearing dynamically allocated memory
free(ptr);

return 0;
}
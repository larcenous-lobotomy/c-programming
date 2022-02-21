#include <stdio.h>

struct detail{
    char name[100];
    char roll[100];
    int age, marks;
};

int main(){

int n;
scanf("%d", &n);
struct detail arr[n];

for(int i = 0; i < n; i++){
    scanf("%s %s %d %d", &arr[i].name, &arr[i].roll, &arr[i].age, &arr[i]. marks);
}

for(int i = 0; i < n; i++){
    printf("%s\n%s\n%d\n%d\n\n", arr[i].name, arr[i].roll, arr[i].age, arr[i]. marks);
}

return 0;
}
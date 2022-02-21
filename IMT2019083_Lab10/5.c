//POLYNOMIAL ADD^N & MLTIPLIC^N
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//MAX
int max(int a, int b){
    return (a > b) ? a : b;
}

//MIN
int min(int a, int b){
    return (a > b) ? b : a;
}

int main(){
   int n1, n2;
    
   //In the process to scan 2 polynomials, we apply 2 consecutive loops preceded by (1)scanning degree of polynomial, and (2)initialising array of coeffs 
   //we store the coeffs according to power of x associated with them(ie in reverse order) 

   scanf("%d", &n1);
   double arr1[n1 + 1];
   for(int i = n1; i >= 0; scanf("%lf", &arr1[i--])) ;

   scanf("%d", &n2);
   double arr2[n2 + 1];
   for(int i = n2; i >= 0; scanf("%lf", &arr2[i--])) ;

   //greater, smaller, signal(signals which array to choose) 
   int g = max(n1, n2), s = min(n1, n2); 
   int sig = (n1 == max(n1, n2) ? 1 : 2);

   //ADDITION
   double add[g + 1];
   for(int i = 0; i < g + 1; i++){
       if (i < s + 1) add[i] = (arr1[i] + arr2[i]);

       else add[i] = (sig == 1) ? arr1[i] : arr2[i];
   }

    //MULTIPLICATION
    double mult[g + s + 1];
    memset(mult, 0,(g + s + 1)*sizeof(double));
    for(int i = 0; i < g + 1; i++) {
        for(int j = 0; j < s + 1; j++){
            mult[i + j] += (sig == 1) ? arr1[i]*arr2[j] : arr1[j]*arr2[i];
        }
    }

    //We print the rev arrays in req manner

    printf("Addition: %d ", g);
    for(int i = g; i >= 0; i--) printf("%lf ", add[i]); 

    printf("\nMultiplication: %d ", g+s);
    for(int i = g + s; i >= 0; i--) printf("%lf ", mult[i]); 

    return 0;
}


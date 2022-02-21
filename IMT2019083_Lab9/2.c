//STRUCTURES
#include <stdio.h>

//two structure variables p1 and p2 are declared to hold two imaginary numbers as desired

struct img{

    //a + ib, in the sense
    float a, b;

}n1, n2;

int main(){

    scanf("%f %f %f %f", &n1.a, &n1.b, &n2.a, &n2.b);
   
    //printing add, sub, and mult
    printf("%.2f + %.2fi\n%.2f + %.2fi\n%.2f + %.2fi\n", (n1.a + n2.a),(n1.b + n2.b),(n1.a - n2.a),(n1.b - n2.b), ((n1.a * n2.a)  -  (n1.b * n2.b)), ((n1.b * n2.a)  +  (n1.a * n2.b)));


    return 0;
}
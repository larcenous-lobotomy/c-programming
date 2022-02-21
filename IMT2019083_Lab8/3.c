#include <stdio.h>

//PROTOTYPES
void adds(double, double);//adding
void subs(double, double);//subtracts
void muls(double, double);//multiplies
void divs(double, double);//divides



int main(){
    //declaring func pointers
void (*add)(double, double) = adds;
void (*sub)(double, double) = subs;
void (*mul)(double, double) = muls;
void (*div)(double, double) = divs;

    double a, b;

    scanf("%lf %lf", &a, &b);

    //loop to read operator to avoid scanning a blank
    int c = getchar(); 
    while (c == ' ') c = getchar(); 
    
    //switch-case-default ladder
    switch (c){
        case('-') : {sub(a,b); break;} 
        case('+') : {add(a,b); break;} 
        case('*') : {mul(a,b); break;} 
        case('/') : {div(a,b); break;} 
    }
    return 0;
}

//func declarations

void adds(double a, double b){
       double r = a + b;
    printf("%.4lf", r);
}

void subs(double a, double b){
    double r = a - b;
    printf("%.4lf", r);
}

void muls(double a, double b){
    double r = a * b;
    printf("%.4lf", r);
}

void divs(double a, double b){
    double r = a / b;
    printf("%.4lf", r);
}

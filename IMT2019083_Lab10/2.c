//VAR LEN ARG LS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>

//NUMLEN
int len(int a){
    return (log10(a) + 1);
}

//FUNCTION
void minprint(char * fmt, ...){
    char * iter;
    int d;
    char d_string[10];
    char c;

    //arg ptr
    va_list ap;

    va_start(ap, fmt);
    for(iter = fmt; *iter; iter++){
        //skip all '%' chars
        if(*iter != '%'){
            //if token is a format specifier
            if((*(iter) == 'c' || *(iter) == 'd') && *(iter - 1) == '%'){
                switch(*iter){
                    //an int
                    case('d') : {//formatting ap to int and storing it in an iterable character array d_string
                                 d = va_arg(ap, int); 
                                 sprintf(d_string, "%d", d);   
                                 //printing to console by putchar
                                 for(int i = 0; i < len(d)  ; i++){
                                    putchar(d_string[i]);
                                 }
                                 break;
                                }

                    //a char
                    case('c') : {c = va_arg(ap, int);
                                 putchar(c);
                                 break;
                                }
                             }
            
                             }
            //print all characters apart from format specifiers
            else putchar(*(iter));
                        }
    }
              

    va_end(ap);
}

//DRIVER CODE
int main(){
   //test code 
   minprint("%d   %c ", 10, 'a');
   
   return 0;
}

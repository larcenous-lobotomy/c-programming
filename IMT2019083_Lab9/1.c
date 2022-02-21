#include <stdio.h>
#include <stdlib.h>

int main( int argc, char ** argv){
if (argc == 4)
    {
       float num1 = atof(argv[1]), num2 = atof(argv[2]);
        char sign = argv[3][0];


       switch(sign){

            case('+') : {printf("%f", num1 + num2); break;}

            case('-') : {printf("%f", num1 -  num2); break;}

            case('*') : {printf("%f", num1 * num2); break;}

            case('/') : {printf("%f", num1 / num2); break;}            

        }
    }

  
exit(0);
}
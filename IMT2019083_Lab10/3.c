//SYSTEM() CALL
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   FILE * f1, * f2;
   f1 = fopen("file1.txt", "w");
   system("date >> file1.txt"); 
   fclose(f1);

   system("sleep 5");

   f2 = fopen("file2.txt", "w");
   system("date >> file2.txt") ;
   fclose(f2);

   char c;

   f1 = fopen("file1.txt", "r");
   while((c = fgetc(f1)) != EOF)
        putchar(c);

   f2 = fopen("file2.txt", "r");
    while((c = fgetc(f2)) != EOF)
        putchar(c);

return 0;
}
//FILE HANDLING
#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{  
    //src files
   FILE *f_ptr_1 = fopen("file1.txt", "r"); 
   FILE *f_ptr_2 = fopen("file2.txt", "r"); 
  
   //destination file(create new) 
   FILE *f_ptr_3 = fopen("file3.txt", "w"); 
   char c; 
  
   //appending file1 and file2 in this order to file3, which is an empty file
   while ((c = fgetc(f_ptr_1)) != EOF) 
      fputc(c, f_ptr_3); 
  
   while ((c = fgetc(f_ptr_2)) != EOF) 
      fputc(c, f_ptr_3); 
  
   fclose(f_ptr_1); 
   fclose(f_ptr_2); 
   fclose(f_ptr_3); 

   return 0; 
} 

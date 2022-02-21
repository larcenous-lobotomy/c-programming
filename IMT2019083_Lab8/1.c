//decimal to any base such that 1 <= b <= 36(STRICTLY)
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
   
char rchar(int); //returns corresponding char for int num to form base b representation
void strev(char *); //revs string by swap
void itob(int, char *, int); //convert func 


int main() 
{ int n, b;

scanf("%d %d", &n, &b);
 
 //MALLOC
char * s = (char *)malloc(32*sizeof(char));
    
    itob(n, s, b);
    strev(s);

    printf("%s", s); 
	
    //freeing used space	
    free(s);

    return 0; 
} 

void itob(int n, char * s, int b) { 
  int i; 
    //append digits of base b counterpart of n in rev order to s
    for(i = 0; n > 0; s[i++] = rchar(n % b), n /= b) ;     
     }


char rchar(int n) 
{ //return values automatically typecast to char
    return  (n < 10 && n >= 0) ? (n + '0') : (n - 10 + 'A');
} 
  

void strev(char *s) 
{ 
    int l = strlen(s); 
    int i; 
    for (i = 0; i < l/2; i++) 
    {   //SWAP
        char k = s[l-i-1]; 
        s[l-i-1] = s[i]; 
        s[i] = k; 
    } 
 }


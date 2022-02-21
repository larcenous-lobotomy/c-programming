//checks if t is an appendage string of s or not 
#include <stdio.h>
#include <stdlib.h>

int size(char *); //size of array (until hitting EOL)
int strend(char*, char*); //detector func

int main(){
    char * s = malloc(300*sizeof(char));
    char * t = malloc(300*sizeof(char));

scanf("%s %s", s, t);

if (strend(s, t))  
    printf("%s", t);//print string if strend returns 1
else 
    printf("%d", 0);//else print 0

//freeing used space
free(s);
free(t);

return 0;
}


int strend(char * s, char * t){
   //storing sizes of array in convenient variables
   int lens = size(s), lent = size(t) ;

 //omitting imaginary case when container string is shorter than contained string  
if (lens < lent) return 0;

//comparing the last (lent) letters of s with t to check
int flag = 0;   
for(int i = lens - lent; i < lens; i++) {
    if (s[i] == t[i - lens + lent]) 
        flag++; 
    else 
        break;}
//returns appropriate truth value
return (flag == lent);
}


int size(char * s){
    int i = 0;
    //determines size by reading until an EOL
    while(*(s + i) != '\0') i++;
    return i;   
}

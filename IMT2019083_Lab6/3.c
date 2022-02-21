#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * stringcat(char *, char *, char *);
int main()
{//pointers to strings
char *s1, *s2, *s3;

//dynamic memory allocation
s1 = (char *)malloc(300 * sizeof(char));
s2 = (char *)malloc(300 * sizeof(char));
s3 = (char *)malloc(700 * sizeof(char));

//scanning the strings
scanf("%s", s1);
scanf("%s", s2);

//reallocating more space to s1 (strcat performs src --> src + def)
s1 = realloc(s1, 900 * sizeof(char));

//printing concatenated string
printf("%s", stringcat(s1, s2, s3));

//clearing space occupied by s1 and s2
free(s1);
free(s2);
free(s3);
return 0;
}

//STRING CONCATENATION 
char * stringcat(char *s1, char *s2, char *s3){
    //appending s2 elements to s1 as long as no EOL is read
    int i = 0;
    int k = strlen(s1);
    s3 = s1;
    while (s2[i] != '\0'){
       s3[k + i] = s2[i];
       i++;
    }
//returning pointer to concatenated string
return s3;
}



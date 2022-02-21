#include <stdio.h>
#include <stdlib.h>

//MAIN
int stringcomp(char *, char *);
int main()
{//initialising pointers to strings
 char *s1, *s2;

//allocating memory to strings of specified size
s1 = (char *)malloc(255 * sizeof(char));
s2 = (char *)malloc(255 * sizeof(char));

//scanning the strings
scanf("%s", s1); 
scanf("%s", s2);   

//printing elements stored within dynamic memory
printf("%d", stringcomp(s1, s2));

//clearing the memory allocated
free(s1);
free(s2);
return 0;
}

//STRING COMPARISON
int stringcomp(char *s1, char *s2)
{   //compares strings in a do-while loop like the original strcmp 
    int i = 0;
    do {
        //if both strings are equal until EOL
        if (s1[i] == '\0' && s1[i] == s2[i])
            return 0;

        //if one string is shorter than the other
        else if (s1[i] == '\0' || s2[i] == '\0')
            return 1;

        i++;   
        } while (s1[i] == s2[i]);
//if the test condition of loop is violated, then strings are definitely not equal
return 1;
}
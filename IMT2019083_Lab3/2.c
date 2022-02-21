/*Program to print the number of distinct substrings of input length in input string*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{ char p[100];
 int l;


scanf("%s %d", p, &l);

/*If input length is greater than string length, no such substrings exist */
if (strlen(p) < l)
	{printf("%d", 0);
	
	 }

/*If input length equals string length, then required substring is the string itself*/


/*We store all possible substrings of given length in a character array, without any other condition, after which we compare all the substrings and continue subtracting the number of repeated strings to get the total number of distinct substrings
The substring array is initialised with the name f[][], and the binary array carrying the truth values for distinction(the first to appear from the left side is unique - any subsequent substring similar to the previous is a repetition */
else 
	{
	 int total = strlen(p) - l + 1;
         int a = 0, b;
		b=0;
         char f[100][100];
             
                for (a = 0; a < total; ++a)
		{
                 for (int i = 0; i < l; ++i)
			{f[a][i] = p[i + b];
			 }b++;}
        			                  
         int binary[total];
        for(int j=0;j<total;j++)
	{
		  binary[j] = 1;
	}
         
         {for (a = 0; a < total; ++a)
             {
              for (b = a+1; b < total; ++b)
                    {if (strcmp(f[a], f[b]) == 0)
                          {binary[b] = 0;
                           }
                     }}} 
  
         int i, finalcount = 0;
         for(i = 0; i < total; ++i)
		{if (binary[i] == 1)
                       ++finalcount;
                  }                
       
                     
                               
         printf("%d", finalcount);}
       return 0; }  
 
       
                 
       

 

			 

			 
                   
                     







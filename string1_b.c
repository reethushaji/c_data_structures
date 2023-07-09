#include <stdio.h>  
#include <string.h>  
void revstr(char s[])  
{  
   
    int i, len;
	char temp;  
    len = strlen(s); 
    for (i=0; i<len/2; i++)  
    {  
        temp = s[i];  
        s[i] = s[len-i-1];  
        s[len-i-1] = temp;  
    }  
}     
    int main()  
    {  
        char str[50]; 
        printf (" Enter the string: ");  
        gets(str); 
        printf (" \n Before revers ing the string: %s \n", str);  
        revstr(str);  
        printf("\n After reversing the string: %s ",str);
    }  

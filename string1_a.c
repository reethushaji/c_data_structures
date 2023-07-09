#include <stdio.h>
#include <string.h>

void revstr(char str[])
{
    int l = strlen(str)-1;
    printf("\n After reversing the string: ");
    while (l>=0)
    {
        printf("%c", str[l]);
        l--;
    }
}

int main()  
    {  
        char str[50]; 
        printf (" Enter the string: ");  
        gets(str); 
        printf (" \n Before reversing the string: %s \n", str);  
        revstr(str);  
     
    }  
  

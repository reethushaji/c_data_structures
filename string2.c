#include <stdio.h>
#include <string.h>
int main()
{
  char str[30][40],temp[30];
  int n,i,j;
  
  printf("Input number of strings :");
  scanf("%d",&n);
  getchar(); 
  printf("Input string %d :\n",n);
  for(i=0;i<n;i++)
   gets(str[i]);
  
     

     for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
	 
     
   printf("The strings in ascending order after sorting :\n");
	      for(i=0;i<n;i++)
		 printf("%s\n",str[i]);
		 return 0;
 
} 

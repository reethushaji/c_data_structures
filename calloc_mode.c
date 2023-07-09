#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,n,i,s=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
   
   int mode = 0, maxCount = 0, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (*(a+j) == *(a+i))
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         mode = *(a+i);
      }
   }

	printf("Mode = %d ", mode);



	free(a);
	return 0;
}






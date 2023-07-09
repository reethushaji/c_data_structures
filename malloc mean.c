#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,n,i,s=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	for(i=0;i<n;i++){
		s=s+*(a+i);
		
	}
	printf("Mean=%d",s/n);
	free(a);
	return 0;
}

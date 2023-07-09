#include<stdio.h>
int main(){
	int element,i,n,count=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the element:");
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
		if(a[i]==element)
	{
			printf("Element found at position %d\n",i+1);
			count++;
	}
	
	}
	printf("The number of occurences of element %d is %d",element,count);
	
	
}

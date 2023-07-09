#include<stdio.h>	
#define N 5
read(int a[], int x)
{
	int i;
	printf("Enter Element \n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
}

disp(int a[], int n)
{
	int i;
	printf("Elements in the array are \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	
	printf("\nArray after sorting is \n");
	sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
}

sort(int a[],int p)
{
	int temp,i,j;
	for(i=0;i<p;i++)
	{
		for(j=i+1;j<p;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

main()
{
	int a[N];
	read(a,N);
	disp(a,N);
}

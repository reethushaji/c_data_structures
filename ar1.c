#include<stdio.h>
#define N 5
int a[N];
int n=-1,i;
void insert()
{
	int b;
	if(n+1==N)
	{
		printf("Array is full");
	}
	else
	{
		printf("Enter the number of elements");
		scanf("%d",&b);
		for(i=0;i<b;i++)
		{
			n=n+1;
	    	printf("Enter a number");
	    	scanf("%d",&a[n]);
		}
	
	}
}
void disp()
{
	
	if(n==-1)
	{
		printf("Array is empty");
	}
	else
	{
		for(i=0;i<=n;i++)
		{
			printf("%d\t",a[i]);
		}
	}
}
void search()
{
	int j,s;
	printf("Enter an element to be searched : ");
	scanf("%d",&s);
	for(j=0;j<n;j++)
	{
		if(a[j]==s)
		{
			printf("element is found at at the position : %d\n",j+1);
		}
	
	}
}
void delete()
{
	int k,d;
	printf("Enter an element to be deleted : ");
	scanf("%d",&d);
	for(k=0;k<=n;k++)
	{
		if(a[k]==d)
		{
		a[k]=a[k+1];
		n=n-1;
	    }
    }
}
void sort()
{
	int f,j,temp=0;
	for(f=0;f<N;f++)
	{
		for(j=f+1;j<N;j++)
		{
			if(a[f]>a[j])
			{
				temp=a[f];
				a[f]=a[j];
				a[j]=temp;
			}
	
		}
		
	}
	
}
int menu()
{
	int ch;
	printf(" 1.Insert\n 2.display\n 3.search\n 4.Delete\n 5.Sort\n 6.Exit\n Enter your choice");
	scanf("%d",&ch);
	return ch;
}
int operations()
{
	int ch;
	for(ch=menu();ch!=6;ch=menu())
	{
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				disp();
				break;
			case 3:
				search();
				break;
			case 4:
			    delete();
				break;
			case 5:
				sort();
				break;
			default:
				printf("Wrong choice");
				break;
		}
	}
}
int main()
{
	operations();
	return 0;
}

#include<stdio.h>
int a;//global variables

void print()
{
	printf("%d\n",a);
}

void disp()
{
	int a=5; //local variable
	printf("%d\n",a);	
	
}


void reg()
{
	register int i; //register variable
	int s;
	s=0;
	for(i=0;i<5;i++)
	{
		s=s+i;
	}
	printf("sum=%d\t register variable=%d\n",s,i);

}
void stat()
{
	static int a=1;
	printf("%d\n",a++);
}
int main()
{
	print();
	disp();
	reg();
	stat();
	stat();
	stat();
	return 0;
	
}
	

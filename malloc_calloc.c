#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a;
	a=(int *)malloc(sizeof(int));
	printf("%d\n",*a);
	*a=40;
	printf("%d\n",*a);
	free(a);
	printf("%d\n",*a);
	int *p;
	p=(int *)calloc(3,2);
	printf("%d\n",*p);
	*p=30;
	printf("%d\n",*p);
	free(p);
	printf("%d",*p);
	return 0;
}

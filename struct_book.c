#include<stdio.h>
#include<stdlib.h>
struct book
{
char bname[100],aname[100];
};
void read(struct book *ptr,int n)
{
int i;
if(ptr==NULL)
{printf("\nError!Unable to allocate");}
else
{
for(i=0;i<n;i++)
{
printf("Enter the name of the book %d)",i+1);
scanf("%s",(ptr+i)->bname);
printf("Enter the name of the author: ");
scanf("%s",(ptr+i)->aname);
}
}
}
void display(struct book *ptr,int n)
{
int i;
for(i=0;i<n;i++)
{
printf("\n%d)Book-Author name: ",i+1);
printf("%s-%s",(ptr+i)->bname,(ptr+i)->aname);
}
}
int main()
{
int n,i;
struct book *ptr;
printf("Enter the no of books: ");
scanf("%d",&n);
ptr=(struct book*)malloc(n*sizeof(struct book));
read(ptr,n);
display(ptr,n);
free(ptr);
return 0;
}


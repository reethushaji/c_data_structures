#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Employee
{
int eno;
char ename[25];
float esal;
int dno;
};
void printemployee(struct Employee emp[],int n)
{
int i;
printf("\n\nDetails of all the Employees:");
printf("\n\nNo\tName\tSalary\tDepartment\n");
printf("------------------------------------------");
for(i=0;i<n;i++)
{
printf("\n%d\t%s\t%f\t%d\n",emp[i].eno,emp[i].ename,emp[i].esal,emp[i].dno);
}
}
int deletemployee(struct Employee emp[], int n)
{
int i,search=0,pos=0,eno;
printf("\nEnter employee number to delete the employee details:");
scanf("%d",&eno);
for(i=0;i<n;i++)
{
if(emp[i].eno==eno)
{
search=1;
pos=i;
break;
}
}
if(search==1)
{
for(i=pos;i<n-1;i++)
{
emp[i]=emp[i+1];
}
printf("\nEmployee is removed");
return 1;
}
else
{
printf("\nEmployee not found!!!!!\nEnter valid employee number");
return 0;
}
}
void searchemployee(struct Employee emp[], int n)
{
int i,search=0,count=0,eno;
printf("Enter the employee id: ");
scanf("%d",&eno);
for(i=0;i<n;i++)
{
if(emp[i].eno==eno)
{
search=1;
count=i;
break;
}
}
if(search==1)
{
printf("\nEmployee found");
printf("\n\nNo\tName\tSalary\tDepartment\n");
printf("---------------------------------------------");
printf("\n%d\t%s\t%f\t%d\n",emp[count].eno,emp[count].ename,emp[count].esal,emp[count].dno);
}
else
{
printf("\nEmployee not found");
}
}

void sortemployee_name(struct Employee emp[], int n)
{
int i,j;
struct Employee b[40];
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(emp[i].ename, emp[j].ename)>0)
{
b[0]=emp[i];
emp[i]=emp[j];
emp[j]=b[0];
}
}
}
printf("\n\nEmployees sorted by their names\n");
printf("-----------------------------------\n");
for(i=0;i<n;i++)
{
printf("\n%d\t%s\t%f\t%d",emp[i].eno,emp[i].ename,emp[i].esal,emp[i].dno);
}
printf("\n");
}
void sortemployee_salary(struct Employee emp[], int n)
{
int i,j;
struct Employee b[40];
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(emp[i].esal<emp[j].esal)
{
b[0]=emp[i];
emp[i]=emp[j];
emp[j]=b[0];
}
}
}
printf("\nEmployess sorted by their salary:\n");
printf("-------------------------------------\n");
for(i=0;i<n;i++)
{
printf("\n%d\t%s\t%f\t%d",emp[i].eno,emp[i].ename,emp[i].esal,emp[i].dno);
}
}
int main()
{
int i,n,choice,size;
struct Employee emp[50];
printf("Enter number of employee: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter Employee %d number:\n ",i+1);
scanf("%d",&emp[i].eno);
printf("Enter Employee %d name: \n",i+1);
scanf("%s",emp[i].ename);
printf("Enter Employee %d salary:\n ",i+1);
scanf("%f",&emp[i].esal);
printf("Enter Employee %d department: \n",i+1);
scanf("%d",&emp[i].dno);
}
while(1)
{
printf("\n\n1. Search an employee by ID \n2. Display All Employees\n3. Sort employee by name\n 4. Sort employee by salary \n 5. Delete an employee\n6. Exit");
printf("\n\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:searchemployee(emp,n);
break;
case 2:printemployee(emp,n);
break;
case 3:sortemployee_name(emp,n);
break;
case 4:sortemployee_salary (emp,n);
break;
case 5:size=deletemployee(emp,n);
if(size==1)
{
n--;
}
break;
case 6:exit(0);
default: printf("\nWrong choice!!!");
}
}
return 0;
}


















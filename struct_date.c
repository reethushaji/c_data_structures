#include<stdio.h>
struct date
{
int date;
int month;
int year;
};
void readDate(struct date *ptr,struct date *ptr1)
{
printf("Enter the date in dd/mm/yy format: ");
scanf("%d%d%d",&ptr->date,&ptr->month,&ptr->year);
printf("Enter the another date in dd/mm/yy format to compare: ");
scanf("%d%d%d",&ptr1->date,&ptr1->month,&ptr1->year);
}
void printDate(struct date *ptr,struct date *ptr1)
{
printf("FIST DATE:\n");
printf("%d - %d - %d\n",ptr->date,ptr->month,ptr->year);
printf("SECOND DATE:\n");
printf("%d - %d - %d",ptr1->date,ptr1->month,ptr1->year);
printf("\n");
}
void compareDate(struct date *ptr,struct date *ptr1)
{
if((ptr->date==ptr1->date )&& (ptr->month==ptr1->month )&& (ptr->year==ptr1->year))
{
printf("\nDates are same");
}
else
{
printf("\n");
printf("\nDates are not same");
}
}
void main()
{
struct date d1,d2;
readDate(&d1,&d2);
printDate(&d1,&d2);
compareDate(&d1,&d2);
}

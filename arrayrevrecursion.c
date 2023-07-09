#include<stdio.h>
void ReverseArray(int arr[], int n)
{
    int i;
    if(n>0)
    {
        i=n-1;
        printf("%d ",arr[i]);
        ReverseArray(arr,i);
    }
return;
}
int main()
{
    int n,j;
    printf("Enter your array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Array Element:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("After reversing Array Element Are:");
    ReverseArray(arr,n);
    return 0;
}

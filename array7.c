//reversal of array
#include<stdio.h>
void main()
{
     int n;
    printf("Enter number of elements");
    scanf("%d",&n);
   int  arr[n];
   int temp=0;
   printf("Enter an array of consecutive elements");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0, j=n-1; i<n/2; i++,j--)
    {
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
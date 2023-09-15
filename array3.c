#include<stdio.h>
void main()
{
  int e,n,p;
    printf("Enter number of elements");
    scanf("%d",&n);
   int  arr[n+1];
    printf("Enter %d elements of a sorted array",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
  
    printf("Enter the element to be inserted");
    scanf("%d",&e);
for(int i=n-1; i>=0;i--)
{
    if(e>arr[i])
        {arr[i+1]=e;
        break;
        }
        arr[i+1]=arr[i];
}
printf("New Array : ");
 for(int i=0; i<n+1; i++)
    {
        printf("%d ",arr[i]);
    }

}
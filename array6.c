#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of elements");
    scanf("%d",&n);
   int  arr[n], max=0;
   printf("Enter the elements");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //max element
     for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    int DAT[max+1];
    DAT[max+1]=0;
    int c=0;
    int a[n];
     for(int i=0; i<max+1; i++)
     {
        DAT[arr[i]]++;
        if(DAT[arr[i]]==1)
        a[c++]=arr[i];
     }
      for(int i=0; i<c; i++)
     {
        printf("\nFrequency of %d = %d", a[i],DAT[arr[i]]);
     }
}

   
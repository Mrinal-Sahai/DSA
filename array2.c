#include <stdio.h>
void main()
{ 
    int e,n,p;
    printf("Enter number of elements");
    scanf("%d",&n);
   int  arr[n+1];
    printf("Enter %d elements",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
  
    printf("Enter the element to be inserted");
    scanf("%d",&e);
    
    printf("Enter the position at which the above element is to inserted");
    scanf("%d",&p);
    
    for(int i=n;i>=0; i--)
    {
        if(i==p-1)
        {
            arr[i]=e;
            break;
        }
        arr[i]=arr[i-1];
        
    }
     for(int i=0; i<n+1; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
}

    #include <stdio.h>
void main()
{ 
    int e,n,p;
    printf("Enter number of elements");
    scanf("%d",&n);
   int  arr[n];
    printf("Enter %d elements",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
  
    printf("Enter the position at which  the element has to be deleted");
    scanf("%d",&p);
    if(p>n+1)
    {
        printf("deletion not possible");
    }
    else
    {
        for(int i=p-1; i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
         for(int i=0; i<n-1;i++)
        {
            printf("%d ", arr[i]);
        }
    }
}
 //missing number
  #include <stdio.h>
void main()
{ 
      int n;
    printf("Enter number of elements");
    scanf("%d",&n);
   int  arr[n-1];
   printf("Enter an array of consecutive elements");
    for(int i=0; i<n-1; i++)
    {
        scanf("%d",&arr[i]);
    }
int sum=n*(n+1)/2;
int sum2=0;
for(int i=0; i<n-1; i++)
    {
        sum2+=arr[i];
    }
    int dif=sum-sum2;
    printf("Missing Element=%d",dif);
}



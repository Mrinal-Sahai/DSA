#include <stdio.h>
void main()
{
    int arr[10];
    printf("Enter 10 elements of array");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ,",arr[i]);
    }

}
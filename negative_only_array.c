#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int a[5];
    //getting input
    printf("Enter an array of size 5: ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    //printf only negative values
    printf("Negative values: ");
    for (int i = 0; i < 5; i++)
    {
        if(a[i]<0) printf("%d\t",a[i]);
    }
    
    return 0;
}
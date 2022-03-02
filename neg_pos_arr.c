#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int a[5],p=0,n=0;
    //getting input
    printf("Enter an array of size 5: ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    //calculation and printf of sum of +ve -ve values
    for (int i = 0; i < 5; i++)
    {
        if(a[i]<0) n+=a[i];
        else p+=a[i];
    }
    printf("Sum of positive values: %d\nSum of positive values: %d",p,n);
    
    return 0;
}
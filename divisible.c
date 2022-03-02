#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int n,lim;
    //getting inputs
    printf("Enter the limit: ");
    scanf("%d",&lim);
    printf("Enter the n: ");
    scanf("%d",&n);
    //printing output
    for (int i = 0; i <= lim; i+=n)
    {
        if(i!=0)
        printf("%d\t",i);
    }
    
    return 0;
}
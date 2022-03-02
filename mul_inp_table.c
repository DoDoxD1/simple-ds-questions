#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int n,limit;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a limit: ");
    scanf("%d",&limit);
    for (int i = 1; i <=limit; i++)
    {
        printf("%4d x%4d =%4d\n",n,i,n*i);
    }
    
    return 0;
}
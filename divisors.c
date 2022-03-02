#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int n;
    //getting input
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0) printf("%d\t",i);
    }
    
    return 0;
}
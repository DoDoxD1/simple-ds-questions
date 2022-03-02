#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int n,flag=0;
    //getting inputs
    printf("Enter a number: ");
    scanf("%d",&n);
    //checking prime conditions
    if(n<3) flag=0;
    else{
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i==0) flag=1;
    }}
    if(flag) printf("Not prime");
    else printf("Prime");
    return 0;
}
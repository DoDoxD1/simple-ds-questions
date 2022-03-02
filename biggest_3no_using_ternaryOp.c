#include<stdio.h>
#include<conio.h>
int main()
{
   //declarations
    int a,b,c,res;
    //getting numbers
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("Enter a number: ");
    scanf("%d",&c);
    //checking for the biggest number
    res = a>b?(a>c?a:c):(b>c?b:c);
    printf("%d is greatest",res);
}
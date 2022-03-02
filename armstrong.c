#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int n,sum=0,t,r;
    //getting inputs
    printf("Enter a number: ");
    scanf("%d",&n);
    //calculating sum of cube of each digit of number
    t=n;
    while (n!=0)
    {
        r = n%10;
        sum = sum + (r*r*r);
        n=n/10;
    }
    //checking for armstrong
    if(sum==t){
        printf("Armstrong");
    }
    else printf("Not armstrong");
    
    return 0;
}
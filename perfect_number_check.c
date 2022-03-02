#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int n,sum=0;
    //getting inputs
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <n; i++)
    {
        if(n%i==0) sum+=i;
    }
    
    //checking and if sum of divisors is equal to number itself(perfect number)
    if(sum==n) printf("The number is perfect");
    else printf("Number is not perfect");
    return 0;
}
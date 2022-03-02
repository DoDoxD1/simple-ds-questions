#include<stdio.h>
#include<conio.h>
int main()
{
     //declarations
    int n,fact=1;
    //getting input
    printf("Enter a number: ");
    scanf("%d",&n);
    //calculating factorial
    while(n!=1){
        fact*=n;
        n=n-1;
    }
    printf("Factorial is: %d",fact);
    return 0;
}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int factorial(int n){
    if(n==1) return 1;
    else return n*factorial(n-1);
}
int main()
{
    int n,res,r;
    printf("Enter  the value of n: ");
    scanf("%d",&n);
    printf("Enter  the value of r: ");
    scanf("%d",&r);
    if(n<r) {
     printf("Calculations impossible");
     exit(0);   
    }
    res = factorial(n)/(factorial(r)*factorial(n-r));
    printf("NCR value is: %d",res);
    return 0;
}
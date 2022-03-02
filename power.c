#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int x,n,res=1;
    //imputs
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter the power of number: ");
    scanf("%d",&n);
    //calcuating power(X^n)
    while(n!=0){
        res*=x;
        n--;
    }
    printf("Result is %d",res);//result
   
    return 0;
}
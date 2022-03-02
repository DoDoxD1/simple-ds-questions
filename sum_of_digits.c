#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        sum+=(n%10);
        n/=10;
    }
    printf("The sum is: %d",sum);
    return 0;
}
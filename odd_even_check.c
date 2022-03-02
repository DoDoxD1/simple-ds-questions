#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int n;
    //getting input
    printf("Enter a number: ");
    scanf("%d",&n);
    //checking for divisiblity by 2
    if(n%2==0) printf("Even");
    else printf("Odd");
    return 0;
}
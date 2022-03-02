#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int n,rem,res=0;
    //getting inputs
    printf("Enter the number: ");
    scanf("%d",&n);
    //revering logic
    while(n!=0){
        rem=n%10;
        res=rem+res*10;
        n/=10;
    }
    //output
    printf("%d",res);
    return 0;
}
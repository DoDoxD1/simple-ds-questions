#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        n/=10;
        count++;
    }
    printf("%d",count);
    return 0;
}
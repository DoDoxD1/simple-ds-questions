#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Number 1 after swap is: ");
    printf("%d\n",a);
    printf("Number 2 after swap is: ");
    printf("%d",b);
    return 0;
}
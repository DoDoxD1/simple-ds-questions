#include<stdio.h>
#include<conio.h>
int main(){
    //declarations
    int a,b,t;
    //getting input
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    //swaping numbers using temporary variable
    t=a;
    a=b;
    b=t;
    //printing the swaped numbers to the output screen
    printf("Number 1 after swap is: ");
    printf("%d\n",a);
    printf("Number 2 after swap is: ");
    printf("%d",b);
    return 0;
}
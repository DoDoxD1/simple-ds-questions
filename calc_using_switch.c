#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    //declaring variables
    int a,b,c,res=0;
    //printing menu for calculations(arithmetic operations)
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    //getting operator
    printf("Enter your choice: ");
    scanf("%d",&c);
    //checking for valid input
    if(!(c==1||c==2||c==3||c==4)){
        printf("Wrong Choice");
        exit(0);
    }
    //geting operands
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    //performing calculations
    switch (c)
    {
    case 1:
        res = a+b;
        break;
    case 2:
        res = a-b;
        break;
    case 3:
        res = a*b;
        break;
    case 4:
        res = a/b;
        break;
    default:
        printf("Wrong Choice");
    }
    //printing the result
    printf("The result is: %d",res);
    return 0;
}
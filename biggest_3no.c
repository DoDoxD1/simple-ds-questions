#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int a,b,c;
    //getting numbers
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("Enter a number: ");
    scanf("%d",&c);
    //checking for the biggest number
    if(a>b){
        if(a>c){
            printf("A is greatest");
        }
        else{
            printf("C is greatest");
        }
    }
    else{
        if(b>c)
        printf("B is the greatest");
        else
        printf("C is greatest");
    }
    return 0;
}
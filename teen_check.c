#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int age;
    //getting input
    printf("Enter your age: ");
    scanf("%d",&age);
    //checking the condition for teenage
    if(age>12&&age<20)printf("teen");
    else printf("Not teen");
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int age;
    //getting input
    printf("Enter your age: ");
    scanf("%d",&age);
    //checking for valid age of voting
    if(age>17)printf("Valid for voting");
    else printf("Not valid for voting");
    return 0;
}
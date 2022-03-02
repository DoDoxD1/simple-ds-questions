#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>12&&age<20)printf("teen");
    else printf("Not teen");
    return 0;
}
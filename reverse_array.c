#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int a[5];
    //getting input
    printf("Enter an array of size 5: ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    //printing reverse array
    printf("Reverse Array: ");
    for (int i = 4; i >=0; i--)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
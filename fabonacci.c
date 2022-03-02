#include<stdio.h>
#include<conio.h>
int main()
{
    //delarations
    int n,current=1,first=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("0\t1\t");
    for (int i = 1; i < n-1; i++)
    {
        temp = current;
        current = first + current;
        first = temp;
        printf("%d\t",current);
    }
    
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int n,lim;
    //getting inputs
    printf("Enter the table: ");
    scanf("%d",&n);
    printf("Enter the limit: ");
    scanf("%d",&lim);
    //printing results
    for (int i = 1; i <=lim; i++)
    {
        printf("%2d +    %d =    %d\n",i,n,i+n);
    }
    return 0;
}
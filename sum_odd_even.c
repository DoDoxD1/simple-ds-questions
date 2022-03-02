#include<stdio.h>
#include<conio.h>
int main()
{
    //decralations
    int n,even=0,odd=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    //calculating sums
    for (int i = 0; i <= n; i+=2)
    {
        even+=i;
    }
    for (int i = 1; i <= n; i+=2)
    {
        odd+=i;
    }
    //printing results
    printf("Sum of even numbers is: %d\n",even);
    printf("Sum of even numbers is: %d",odd);
    return 0;
}
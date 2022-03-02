#include<stdio.h>
#include<conio.h>
int main()
{
    //declarations
    int n;
    float avg=0;
    //getting input
    printf("Enter the valye of n: ");
    scanf("%d",&n);
    //finding the result
    for (int i = 1; i <= n; i++)
    {
        avg+=i;
    }
    avg/=n;
    //printing results
    printf("The average of first n numbers is %.2f",avg);
    return 0;
}
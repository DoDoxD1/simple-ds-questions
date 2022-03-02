#include<stdio.h>
#include<conio.h>
int main()
{
    //declaration
    int amt,n;
    //getting amount 
    printf("Enter the amoount in rupees: ");
    scanf("%d",&amt);
    //determining number of 500 rupee notes
    n=amt/500;
    amt = amt%500;
    if(n)
        printf("Number of 500 notes: %d\n",n);
    //determining number of 100 rupee notes
    n=amt/100;
    amt = amt%100;
    if(n)
        printf("Number of 100 notes: %d\n",n);
    //determining number of 50 rupee notes
    n=amt/50;
    amt = amt%50;
    if(n)
        printf("Number of 50 notes: %d\n",n);
    //determining number of 20 rupee notes
    n=amt/20;
    amt = amt%20;
    if(n)
        printf("Number of 20 notes: %d\n",n);
    //determining number of 10 rupee notes
    n=amt/10;
    amt = amt%10;
    if(n)
        printf("Number of 10 notes: %d\n",n);
    //determining number of 5 rupee notes
    n=amt/5;
    amt = amt%5;
    if(n)
        printf("Number of 5 notes: %d\n",n);
    //determining number of 2 rupee notes
    n=amt/2;
    amt = amt%2;
    if(n)
        printf("Number of 2 notes: %d\n",n);
    //determining number of 1 rupee notes
    n=amt/1;
    if(n)
        printf("Number of 1 notes: %d\n",n);
    return 0;
}
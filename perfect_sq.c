#include <stdio.h>
#include <conio.h>
int main()
{
    // declarations
    int n, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i * i == n)
        {
            flag = 1;
            break;
        }
        else if (i * i > n)
            break;
    }
    if(flag) printf("Perfect square");
    else printf("Not perfect square");
    return 0;
}
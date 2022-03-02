#include<stdio.h>
#include<conio.h>
int main(){
    int i=1,j=1;
    while(i!=11){
        while(j!=11){
            printf("%d\t",i*j);
            j++;
        }
        j=1;
        printf("\n");
        i++;
    }
    return 0;
}
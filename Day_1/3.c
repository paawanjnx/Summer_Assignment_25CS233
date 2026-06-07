// write a program to find factorial of a given number

#include<stdio.h>
int main () {
    int n,i,factorial=1;
    printf("enter a number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    
    }
    printf("factorial is %d",factorial); //no & in printf(said by my bbg<3)
    return 0;

}
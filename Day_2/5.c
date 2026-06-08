// program to find the sum of digits of a number.
#include<stdio.h>
int main (){
    int n,sum=0;
    printf("Enter a number n:");
    scanf("%d",&n);
    while(n!=0){
        int ld=n%10;
        sum+=ld;
        n=n/10;
    }
    printf("sum of the digit is= %d",sum);
    return 0;
    }
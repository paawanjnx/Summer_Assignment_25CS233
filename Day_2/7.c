// write a program to find product of digits.
#include<stdio.h>
int main (){
    int n,pro=1;
    printf("Enter a number n:");
    scanf("%d",&n);
    while(n!=0){
        int ld=n%10;  //inital val
        pro=ld*pro;  //product will get multiplied to the last digit.
        n=n/10;
    }
    printf("pro of the digit is= %d",pro);
    return 0;
}
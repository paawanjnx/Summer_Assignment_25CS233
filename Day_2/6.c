// write a program to reverse a number.
#include<stdio.h>
int main(){
    int n,re=0;                      // ld = last digit ,, re = reverse
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){   // loop will run untill value of n becomes 0.
        int ld; 
        ld=n%10;  // in ld we get remainder.
        re=(10*re)+ld;  
        n=n/10;
    }
    printf("reverse number is=%d",re);
    return 0;
    }
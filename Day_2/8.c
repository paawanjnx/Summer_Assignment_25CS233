// program to check wether a number is palindrome.
#include<stdio.h>
int main() {
    int n,re=0,temp;                      // ld = last digit ,, re = reverse
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;  // we are storing the value of n in temp because we will compare it with re.
    while(n!=0){   // loop will run untill value of n becomes 0.
        int ld; 
        ld=n%10;  // in ld we get remainder.
        re=(10*re)+ld;  
        n=n/10;
    }
    if(temp==re){
        printf("palindrome number");
    }
    else{
        printf("not palindrome");
    }
    return 0;

}
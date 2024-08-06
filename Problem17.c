/******************************************* 
WAP that will determine whether a number is prime or not.
********************************************/
#include<stdio.h>
int main(){
    int n, count=0;
    printf("Enter your number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0)
        count++;
    }
    if(count>1&&count<=2)
    printf("Prime.");
    else printf("Not Prime.");
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/
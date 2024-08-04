/******************************************* 
Write a program (WAP) that will reverse the digits of an input integer.
********************************************/

#include<stdio.h>
int main(){
    int num,temp=0;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    for(int i=1;;i++){
        temp=temp*10+num%10;
        num/=10;
        if(num%10==0)
        break;
    }
    printf("Reversed number: %d",temp);
}

/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/
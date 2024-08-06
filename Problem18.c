/******************************************* 
WAP that will determine whether an integer is palindrome number or not.
********************************************/
#include<stdio.h>
int main(){
    int num1,num2=0,temp;
    printf("Enter an integer number:");
    scanf("%d",&num1);
    temp=num1;
    for(int i=1;;i++){
        num2=(num2*10)+num1%10;
        num1/=10;
        if(num1%10==0)
        break;
    }
    if(num2==temp)
    printf("Yes.");
    else 
    printf("No.");
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/
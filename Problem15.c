/******************************************* 
Write a program (WAP) that will find x^y
(x to the power y) where x, y are positive integers.
********************************************/
#include<stdio.h>
#include<math.h>
int main(){
    int x,y,result;
    printf("Enter value of base(x): ");
    scanf("%d",&x);
    printf("Enter value of power(y): ");
    scanf("%d",&y);
    if(x>=0&&y>=0){
    result=pow(x,y);
    printf("Result= %d",result);
}
    else
    printf("x and y is not positive.");
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/
/******************************************* 
Write a program (WAP) that will print the factorial (N!) of a given number N. Please see
the sample input output.
********************************************/
#include<stdio.h>
int main(){
    int n,result=1;
    printf("Enter Term value: ");
    scanf("%d",&n);
    printf("%d!=",n);
    for(int i=1; i<=n; i++){
        result*=i;
        printf("%d",i);
        if(i<n)
        printf("X");
    }
    printf("= %d",result);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/
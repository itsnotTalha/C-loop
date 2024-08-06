/******************************************* 
Write a program that takes an integer number n as input and find out the sum of the
following series up to n terms.
1 + 12 + 123 + 1234 + …….
********************************************/
#include<stdio.h>
int main(){
    int n,temp,sum=0;
    printf("Enter Term value: ");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        temp=0;
        for(int j=1;j<=i;j++)
        temp=(temp*10)+j;
        printf("%d",temp);
        if(i<n)
        printf(" + ");
        sum+=temp;    
        }
        printf("\nSum of this series: %d",sum);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/
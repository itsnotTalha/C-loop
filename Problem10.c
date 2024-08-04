/******************************************* 
Write a program (WAP) that will give the sum of first Nth terms for the following series.
1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, …….
********************************************/
#include<stdio.h>
int main(){
    int n,sumPos=0,sumNeg=0;
    printf("Enter Term value: ");
    scanf("%d",&n);

        printf("Your series: ");
    for(int i=1;i<=n;i++){
        if(i%2!=0)
        sumPos+=i;
        else
        sumNeg+=i;
        if(i%2==0)
        printf("-");
        printf("%d",i);
        if(i<n)
        printf(",");
    }
    printf("\nSum of first %d term= %d",n,sumPos-sumNeg);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/
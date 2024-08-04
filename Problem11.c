/******************************************* 
Write a program (WAP) that will calculate the result for the first Nth terms of the
following series. [In that series sum, dot sign (.) means multiplication]
1^2.2 + 2^2.3 + 3^2.4 + 4^2.5 + …….
********************************************/
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter Term value: ");
    scanf("%d",&n);        
    printf("Your series: ");
    for(int i=1;i<=n;i++){
        printf("%d^2.%d",i,i+1);
        if(i<n)
        printf("+,");
        sum=sum+((i*i)*(i+1));
    }
    printf("\nResult for first %d term: %d",n,sum);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/
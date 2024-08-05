/******************************************* 
Write a program (WAP) that will find nCr where n >= r; n and r are integers.
********************************************/
#include<stdio.h>
int main(){
    int n,r, tempRes=1,tempRes2=1,tempRes3=1,finalRes;
    printf("Enter value of n & r: ");
    scanf("%d %d",&n,&r);
    if(n>=r){
    for(int i=1;i<=n;i++)
    tempRes*=i;
    for(int i=1;i<=r;i++)
    tempRes2*=i;
    for(int i=1;i<=n-r;i++)
    tempRes3*=i;
    finalRes=tempRes/(tempRes2*tempRes3);
    printf("nCr= %d", finalRes);
    }
    else printf("ERROR!");
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/
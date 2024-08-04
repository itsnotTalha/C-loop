/**********************************
 Write a program (WAP) that will print following series upto Nth terms.
1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …….
 **********************************/

#include<stdio.h>
int main(void){
    int i,n;
    printf("Enter Term value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       if(i%2!=0)
    printf("1");
    if(i%2==0)
    printf("0");
   if (i<n)
    printf(",");
     }
}

/***********
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * United International University
 ***********/
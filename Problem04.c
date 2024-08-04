/**********************************
 Write a program (WAP) that will take N numbers as inputs and compute their average.
(Restriction: Without using any array)
 **********************************/

#include<stdio.h>
int main(void){
    int i,n, num,sum=0;
    float avg;
    printf("Enter Term value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    printf("Enter value: ");
    scanf("%d",&num);
    sum+=num;
     }
     avg=sum/n;
     printf("Average of %d input:%f",n,avg);
}

/***********
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * United International University
 ***********/
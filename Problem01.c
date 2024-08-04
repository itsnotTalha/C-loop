/**********************************
 Write a program (WAP) that will print following series upto Nth terms.
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, …….
 **********************************/

#include<stdio.h>
int main(void){
    int i,n;
    printf("Enter Term value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    printf("%d", i);
    if(i!=n)
    printf(",");
    }
}

/***********
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * United International University
 ***********/
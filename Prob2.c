/**********************************
 Write a program (WAP) that will print following series upto Nth terms.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….
 **********************************/

#include<stdio.h>
int main(void){
    int i,n;
    printf("Enter Term value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
    printf("%d", i);
    if(i<n-1)
    printf(",");
        }
    }
}

/***********
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * United International University
 ***********/
/******************************************* 
Write a program (WAP) that will print Fibonacci series upto Nth terms.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….
********************************************/
#include<stdio.h>
int main(){
    int n, a = 1, b = 1;
    printf("Enter Term value: ");
    scanf("%d",&n);        
    printf("Your series: ");
    if (n >= 1) 
        printf("%d", a);
    if (n >= 2)
        printf(", %d", b);
    for(int i=3;i<=n;i++){
    int next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/
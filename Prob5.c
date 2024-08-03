/******************************************* 
Write a program (WAP) that will take two numbers X and Y as inputs. Then it will print
the square of X and increment (if X<Y) or decrement (if X>Y) X by 1, until X reaches Y. If
and when X is equal to Y, the program prints “Reached!”
********************************************/
#include<stdio.h>
#include<math.h>
int main(void){
   int x,y,z;
   printf("Enter value of X:");
   scanf("%d",&x);
   printf("Enter value of Y:");
   scanf("%d",&y);

   if(x>y)
   for(x;x>=y;x--){
   printf("%d",(int)pow(x,2));
   if(x>=y)
   printf(", ");  
            }

   else if(x<y)
   for(x;x<=y;x++){
   printf("%d",(int)pow(x,2));
   if(x<=y)
   printf(", ");  
            }
            
   else if(x==y)
    printf("Reached!");         
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * United International University
********************************************/

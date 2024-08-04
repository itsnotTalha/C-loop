/******************************************* 
Write a program (WAP) for the described scenario:
Player-1 picks a number X and Player-2 has to guess that number within N tries. For each
wrong guess by Player-2, the program prints “Wrong, N-1 Choice(s) Left!” If Player-2 at
any time successfully guesses the number, the program prints “Right, Player-2 wins!” and
terminates right away. Otherwise after the completion of N wrong tries, the program
prints “Player-1 wins!” and halts.
(Hint: Use break/continue)
********************************************/
#include<stdio.h>
int main(void){
   int x,N,n;
   printf("Pick the number X: ");
   scanf("%d",&x);
   printf("Number of trial: ");
   scanf("%d",&N);
   for(int i=1; i<=N;i++){
    printf("Enter your number: ");
    scanf("%d",&n);
    if(n==x){
    printf("Congrats! You guessed it RIGHT!\nPlayer-2 wins.");
    break;
    }
    else 
    printf("Wrong. %d choice(s) left.\n",N-i);
   }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * United International University
********************************************/
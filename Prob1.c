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
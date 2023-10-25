#include<stdio.h>
void printReverse(int n){
    if(n==0){
         return;
    }
    printf("%d",n);
    return printReverse(n-1);
   
}
void main(){
    int n;
    printf("enter a number\n");
    scanf("%d ",&n);
    printf("Reversed number is :");
    printReverse(n);
}
#include<stdio.h>
int sumOfdigit(int n,int s){
    if(n==0){
        return s;
    }
    return sumOfdigit(n/10,s+(n%10));
}
void main() {
    int s=0,n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("sum of digit is:");
    printf("%d",sumOfdigit(n,s));
}
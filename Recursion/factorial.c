#include<stdio.h>
int fact(int n,int f){
    if(n==0){
         return f;   
    }
return fact(n-1,n*f);
}
void main() {
    int f=1,n;
    printf("enter a number\n");
    scanf("%d",&n);
    int ans=fact(n,f);
    printf("%d",ans);

}
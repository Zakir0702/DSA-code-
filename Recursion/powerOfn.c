#include<stdio.h>
int fact(int n,int p,int f){
    if(p==0){
         return f;   
    }
return fact(n,p-1,n*f);
}
void main() {
    int f=1,n,p;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter the power\n");
    scanf("%d",&p);
    int ans=fact(n,p,1);
    printf("%d",ans);

}
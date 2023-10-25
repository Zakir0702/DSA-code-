#include<stdio.h>
int top=-1,stack[20],n,item;
void PUSH() {
    if (top>= n-1){
        printf("overflow");
    }
    else{
        top = top + 1;
        printf("Enter the element to be pushed:\n");
        scanf("%d",&item);
        stack[top] = item;
        printf("pushed elemnt %d ",stack[top]);
        
    }
}
void POP() {
    if (top<=-1){
        printf("underflow");
    }
    else{
        item=stack[top];
        printf("deleted element %d",item);
        top=top-1;
    }
}
void display() {
    if(top>=0)
    {
        for(int i=top;i>=0;i--)
        {
            printf("\nElements in Stack are:\t%d ",stack[i]);
        }
    }
}

int main() {
    int choice;
    printf("enter size of stack\n");
    scanf("%d",&n);
    do{
        printf("Enter choice\n 1.PUSH\n 2.POP\n 3.Display\n");
        scanf("%d",&choice);
        switch(choice) {
            case 1 : PUSH();
                break;
            case 2:  POP();
                break;
            case 3:  display();
                break;
            default: printf("\n EXIT");
        }
    }
    while(choice<4);
}

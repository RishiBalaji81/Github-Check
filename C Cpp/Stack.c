#include<stdio.h>
int stack[5];
int top=-1;
void push(){
    int x;
    printf("Enter data");
    scanf("%d",&x);
    if(top==4){
        printf("Full");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("Empty");
    }
    else{
        printf("popped:%d",stack[top]);
        top--;
    }
}
void display(){
    int i;
    if(top==-1){
        printf("Empty");
    }
    else{
        for(i=top;i>=0;i--){
                printf("%d",stack[i]);
        }
    }
}
void peek(){
    if(top==-1){
        printf("Empty");
    }
    else{
        printf("Peeked:%d",stack[top]);
    }
}
void main(){
    int ch;
    do{
        printf("1 push 2 pop 3 peek 4 display");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:{
        push();
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            peek();
            break;
        }
        case 4 :{
            display();
            break;
        }
        default:printf("Check the choises");
            break;
        }
    }while(ch!=0);
}
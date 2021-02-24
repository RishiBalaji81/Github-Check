#include<stdio.h>
int queue[5];
int front=-1;
int rear=-1;
void enqueue(int x){
    if(rear==4)
        printf("Queue is full");
    else if(front==-1 && rear ==-1){
        rear=front=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue(){
    if(front==-1 && rear==-1)
        printf("Queue is empty");
    else if(front==rear)
        front=rear=-1;
    else{
        printf("Element popped:%d",queue[front]);
        front++;
    }
}
void display(){
    int i;
    if(front==-1 && rear==-1){
        printf("Queue is empty");
    }
    else{
        for(i=front;i<=rear;i++){
            printf("%d",queue[i]);
        }
    }
}
void peek(){
    if(front==-1 && rear==-1){
        printf("Queue is empty");
    }
    else{
        printf("Element at top:%d",queue[front]);
    }
}
void main(){
    enqueue(5);
	enqueue(8);
	enqueue(3);
	enqueue(10);
	enqueue(4);
	display();
	dequeue();
	peek();
	dequeue();
	display();
}
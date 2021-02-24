#include<stdio.h>
int queue[5];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(front==-1&&rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%5==front){
        printf("unnderflow Condition");
    }
    else{
        rear=(rear+1)%5;
        queue[rear]=x;
    }
}
void dequeue(){
    if(front==-1&&rear==-1){
        printf("Empty");
    }
    else if(rear==front){
        front=rear=-1;
    }
    else{
        printf("Dequeued:%d",queue[front]);
        front=(front+1)%5;
    }
}
void display(){
    int i;
    if(front==-1&&rear==-1){
        printf("Empty");
    }
    else{
        while(i!=rear)
        {
            printf("%d",queue[i]);
            i=(i+1)%5;
        }
        printf("%d",queue[rear]);
    }
}
void peek(){
    if(front==-1&&rear==-1){
        printf("Empty");
    }
    else{
        printf("Element peeked:%d",queue[front]);
    }
}
void main()
{
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
	enqueue(1);
	enqueue(40);
	display();
}

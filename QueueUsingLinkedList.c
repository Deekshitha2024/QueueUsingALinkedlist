#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
struct node *newnode;
void enqueue(int ele){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=0;
    newnode->data=ele;
    if(front==0 && rear==0){
        front=rear=newnode;
    }
    else{
        
        rear->next=newnode;
        rear=newnode;
    }
    
}
void dequeue(){
    struct node *temp;
    if(front==0 && rear==0){
        printf("Queue is empty");
    }
    else{
    temp=front;
    front=front->next;
    printf("The deleted element is %d",temp->data);
    free(temp);
    }
}
void peek(){
    printf("The peek element is %d",front->data);
}
void display(){
    struct node *temp;
    if(front==0 && rear==0){
        printf("Queue is empty");
    }
    else{
    temp=front;
    printf("The elements of the queue are");
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
 }
    
}
void main(){
       int ch,ele;
       while(1){
        printf("\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit");
        printf("Enter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("ENter an element to be insert");
                scanf("%d",&ele);
                enqueue(ele);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("ENter valid choice");
            
        }
    }
    
}

#include<stdio.h>
#include<stdlib.h>
#define max 4
int cqueue[max];
int rear=max-1;
int front=max-1;
int insert(){
 int add_item;
 if(front==(rear+1)%max)
 {
 printf("Queue Overflow \n");
}
 else{
 rear=(rear+1)%max;
 printf("Insert an element in queue :");
 scanf("%d",&add_item);
 cqueue[rear]=add_item;
 }
}
int Delete(){
 if(rear==front)
 printf("\nQueue Underflow \n");
 else{
 	front=(front+1)%max;
 printf("Deleted element is  : %d\n",cqueue[front]);
 }
}
 
int display(){
 int i;
 if (rear==front)
 printf("\nQueue id empty");
 else{
 printf("\nQUEUE IS :\n");
 for(i=(front+1)%max;i<=rear;i++){
 printf("%d",cqueue[i]);
 printf("\t");
 }
 }
}
int main(){
 int choice;
 while(1){
 printf("\n 1.INSERT \t 2.DELETE \t 3.DISPLAY \t 4.EXIT\n");
 printf("Enter your choice:");
 scanf("%d",&choice);
 switch (choice){
 
 case 1:
 insert();
 break;
 case 2:
 Delete();
 break;
 case 3:
 display();
 break;
 case 4:
 exit(0);
 default:
 printf("item not supported");
 }
 }
}

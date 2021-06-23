#include<stdio.h>
#include<stdlib.h>
#define max 50
int que_arr[max];
int rear=-1;
int front =-1;
int insert(){
 int add_item;
 if(rear==max-1)
 printf("QUEUE OVERFLOW \n");
 else{
 if(front==-1)
 front=0;
 printf("\nInsert the element in queue :");
 scanf("%d",&add_item);
 rear=rear+1;
 que_arr[rear]=add_item;
 }
}
int Delete(){
 if(front==-1 || front >rear ){
 printf("\nQUEUE UNDERFLOW \n");
 return front;
 }
 else{
 printf("\nELement deleted from queue is : %d\n",que_arr[front]);
 front=front+1;
 }
}
 
int display(){
 int i;
 if (front==-1)
 printf("\nQUEUE IS EMPTY");
 else{
 printf("\nQUEUE IS :\n");
 for(i=front;i<=rear;i++){
 printf("%d",que_arr[i]);
 printf("\n");
 }
 }
}
int main(){
 int choice;
 while(1){
 printf("\n 1.INSERT \n 2.DELETE \n 3.DISPLAY \n 4.QUIT\n");
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

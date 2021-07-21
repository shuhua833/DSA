#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *link;
};
struct node * start=NULL;
struct node *createnode()
{
struct node *n;
n=(struct node*)malloc(sizeof(node));
return(n);
}
void insertnode()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(node));
printf("enter a number\n");
scanf("%d",&temp->info);
if(start==NULL)
{
start=temp;
temp->link=NULL;
}
else
{
temp->link=start;
start=temp;
}
}
void Delete()
{
struct node *ptr,*loc;
ptr=start;
if(start==NULL)
printf("LINKED LIST IS EMPTY\n");
else
{
while(ptr->link!=NULL)
{
loc=ptr;
ptr=ptr->link;
}
loc->link=NULL;
free(ptr);
}}
void Display()
{
struct node *t;
t=start;
while(t!=NULL)
{
printf("%d\n",t->info);
t=t->link;
}
}
int main()
{
int cho;
char ch;
do{
printf("1: Insert\t2:Display\t3:Delete\t4:Exit\n");
printf("Enter you choice\n");
scanf("%d",&cho);
switch(cho)
{
case 1:
insertnode();
break;
case 2:
Display();
break;
case 3:
Delete();
break;
case 4:
exit(0);
default:
printf("wrong choice\n");
}
printf("do you want to continue Y or y\n");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='Y'||ch=='y');
getch();
return 0;
}

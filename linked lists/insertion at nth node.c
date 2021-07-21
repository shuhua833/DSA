#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *link;
};
struct node * start=NULL;
void insertnode()
{
int pos,i;
struct node *newnode,*temp;
newnode=(struct node*)malloc(sizeof(node));
printf("enter a number\n");
scanf("%d",&newnode->info);
newnode->link=NULL;
printf("enter the position\n");
scanf("%d",&pos);
if(start==NULL)
{
start=newnode;
}
else{
if(pos==1)
{
newnode->link=start;
start=newnode;
}
else
{
temp=start;
for(i=1;i<pos-1;i++)
{
temp=temp->link;
}
newnode->link=temp->link;
temp->link=newnode;
}
}
}void Display()
{
struct node *t;
t=start;
while(t!=NULL)
{
printf("%d\n",t->info);
t=t->link;
}
}int main()
{
int cho;
char ch;
do{
printf("1: Insert\n");
printf("2: Display\n");
printf("3: Exit\n");
printf("enter you choice\n");
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

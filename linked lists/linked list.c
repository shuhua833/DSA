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
struct node *temp,*t;
temp=createnode();
printf("enter a number\n");
scanf("%d", &temp->info);
temp->link=NULL;
if(start==NULL)
start=temp;
else
{
t=start;
while(t->link!=NULL)
{
t=t->link;
}
t->link=temp;
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
}
int main()
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
printf("case1\n");
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

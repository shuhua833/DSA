#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 5
int stack[max];
int top=-1;
void push(int x)
{
	if(top==max-1)
	{
		printf("stack overflow\n");
	}
else{
	stack[++top]=x;
	printf("Push item= %d: ",stack[top]);
}
}
int pop()
{
	int data;
	if(top==-1)
	{
		printf("stack is empty\n");
		return NULL;
	}
	
	else{
		data=stack[top];
		top=top-1;
		return data;
	}
}
void display()
{
	int i;
	if(top==-1)
	printf("stack empty\n");
	else if(top==max)
	{
		printf("stack overflow\n");
	}
		else
		{
			for(i=top;i>=0;i--)
			{
				printf("%d\n ",stack[i]);
			}
		}
	}


int main()
{
	int ch,n,d;
	char c;
	do
	{
		printf("1:push item\n");
			printf("2:pop item\n");
				printf("3:display item\n");
					printf("4:exit\n");
						printf("enter your choice\n");
						scanf("%d",&ch);
						switch(ch)
						{
							case 1:
								printf("enter item to be push on stack: ");
								scanf("%d",&n);
								push(n);
								break;
								case 2:
									d=pop();
									printf("the deleted item is %d: ",d);
									break;
									case 3:
										display();
										break;
										case 4:
											exit(1);
						}
						printf("\npress y to contiue: ");
						fflush(stdin);
						scanf("%c",&c);
			}while((c=='y')||(c=='Y'));
}

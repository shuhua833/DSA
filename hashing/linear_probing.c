#include <stdio.h>
#include<stdlib.h>
#define SIZE 10
int h[SIZE]={NULL};
void insert()
{

 int value,index,i,key;
 printf("\nenter a value to insert into hash table\n");
 scanf("%d",&value);
 key=value%SIZE;
 for(i=0;i<SIZE;i++)
{

     index=(key+i)%SIZE;

     if(h[index] == NULL)
     {
        h[index]=value;
         break;
     }

}
if(i == SIZE)
     printf("\nelement cannot be inserted\n");
}
void search()
{

 int value,index,i,key;
 printf("\nenter search element\n");
 scanf("%d",&value);
 key=value%SIZE;
 int temp=key;
 for(i=0;i<SIZE; i++)
 {
    index=(key+i)%SIZE;
    if(h[index]==value)
    {
      printf("value is found at index %d",index);
      break;
    }

  }
  if(i == SIZE)
    printf("\n value is not found\n");
}
void display()
{
  int i;

  printf("\nelements in the hash table are \n");

  for(i=0;i<SIZE; i++)

              printf("\n index %d \t =  %d",i,h[i]);

}
int main()
{
    int ch;
    while(1)
    {
        printf("\n1. Insert\t 2. Display \t3. Search \t4.Exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
        }
    }
}

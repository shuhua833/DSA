#include<stdio.h>//Tower of Honai
#include<conio.h>
void toh(int n, char sou,char aux,char des);
int main()
{
int n;
printf("enter no. of disks\n");
scanf("%d",&n);
toh(n,'S','A','D');
getch();
return 0;
}
void toh(int n,char sou,char aux, char dest)
{
if(n==1)
{
printf("moves tower %c to %c\n",sou, dest);
}
else
{
toh(n-1,sou,dest,aux);
toh(1,sou,aux,dest);
toh(n-1,aux,sou,dest);
}
}

#include<stdio.h>//program for bubble sort
#include<conio.h>
void bubblesort(int a[],int n);
int main()
{
int a[20],i,n;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements of array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubblesort(a,n);
getch();
return 0;
}
void bubblesort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("array after sorting");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}}

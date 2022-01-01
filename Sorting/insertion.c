#include<stdio.h>
#include<conio.h>
void insertion_sort(int A[],int n);
int main()
{
int n,i,A[10];
printf("enter the value for size of array");
scanf("%d",&n);
printf("enter the numbers\n");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
insertion_sort(A,n);
getch();
return 0;
}
void insertion_sort(int A[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
temp=A[i];
j=i;
while(j>0&&temp<A[j-1])
{
A[j]=A[j-1];
j=j-1;
}
A[j]=temp;
}
printf("the sorted element by insertionsort are:\n");
for(i=0;i<n;i++)
{
printf("%d\n",A[i]);
}
}

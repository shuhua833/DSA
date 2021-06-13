#include<stdio.h>
int main()
{
	int a[100],pos,i,n,nel;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	printf("enter position of new element\n");
	scanf("%d",&pos);
	printf("enter the value of new element\n");
	scanf("%d",&nel);
	for(i=n-1;i>=pos;i--)
	{
	a[i+1]=a[i];
    }
	a[pos]=nel;
	printf("new array\n");
	for(i=0;i<n+1;i++)
	{
	printf("%d\t",a[i]);
    }
}

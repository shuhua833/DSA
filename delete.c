#include<stdio.h>
int main()
{
	int a[100],pos,i,n;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position at which you want to delete \n");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("new array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

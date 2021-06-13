#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],n,m,i;
	printf("enter the number of elements to insert in first array\n");
	scanf("%d",&m);
	printf("enter the number of elements to insert in second array\n");
	scanf("%d",&n);
	printf("enter the elements of first array\n");
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
		printf("enter the elements of second array\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
		
	}
	for(i=0;i<n;i++)
	{
		c[i+m]=b[i];
	}
	printf("merged array \n");
	for(i=0;i<m+n;i++)
	{
		printf("%d\t",c[i]);
	}
	
	
	
}

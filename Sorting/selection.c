#include <stdio.h>
void select(int a[],int n)
{
	int i,j,temp,loc;
	for(i = 0; i < n - 1; i++)
{
loc=i;
for(j = i + 1; j < n; j++)
{
if(a[loc] > a[j])
loc=j;
}
temp=a[i];
a[i]=a[loc];
a[loc]=temp;
}
printf("Sorted Array:n");
for(i = 0; i < n; i++)
printf("%d\n", a[i]);
}
int main()
{
int a[100], n, i, j,loc,temp;
printf("Enter number of elements");
scanf("%d", &n);
printf("Enter the elements");
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
select(a,n);
return 0;
}

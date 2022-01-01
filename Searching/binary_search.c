# include <stdio.h>
# include <conio.h>
main()
{
int A[25], n, data, i, flag = 0, beg, end, mid;
beg = 0; 
end = n-1;
printf("\n Enter the number of elements: ");
scanf("%d",&n);
printf("\n Enter the elements in ascending order: ");
for(i = 0; i < n; i++)
scanf("%d", &A[i]);
printf("\n Enter the element to be searched: ");
scanf("%d", &data);
while(beg<=end)
{
mid = (beg + end)/2;
if(A[mid] == data)
{
flag=1;
break;
}
else
{
if(data < A [mid])
end=mid-1;
else
beg = mid + 1;
}}
if(flag == 1)
printf("\n Data found at location: %d", mid + 1);
else
printf("\nData Not Found ");}

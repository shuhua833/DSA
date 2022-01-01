# include <stdio.h>
void binarysearch(int A[],int beg,int end,int data)
{
int mid;
if(beg<=end)
{
mid = (beg + end)/2;
if(A[mid] == data)
{
printf("data found at location: %d ",mid+1);
}
else
{
if(data <A[mid])
binarysearch(A,beg,mid-1,data);
else
binarysearch(A,mid+1,end,data);
}}
else
printf("\nData Not Found "); }
int main()
{
int A[25], n, data, i, flag = 0, beg, end, mid;
printf("\n Enter the number of elements: ");
scanf("%d",&n);
printf("\n Enter the elements in ascending order: ");
for(i = 0; i < n; i++)
scanf("%d", &A[i]);
printf("\n Enter the element to be searched: ");
scanf("%d", &data);
binarysearch(A,0,n-1,data);
}

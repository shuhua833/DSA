#include<stdio.h>//quick sort
void quicksort(int [10],int,int);
int main(){
int x[20],size,i;
printf("Enter size of the array: ");
scanf("%d",&size);
printf("Enter %d elements: ",size);
for(i=0;i<size;i++)
scanf("%d",&x[i]);
quicksort(x,0,size-1);
printf("Sorted elements: ");
for(i=0;i<size;i++)
printf(" %d",x[i]);
return 0;
}
void quicksort(int x[10],int first,int last)
{
int pivot,l,temp,r;
if(first<last){
pivot=first;
l=first;
r=last;
while(l<r){
while(x[l]<=x[pivot]&&l<last)
l++;
while(x[r]>x[pivot])
r--;
if(l<r){
temp=x[l];
x[l]=x[r];
x[r]=temp;
}
}
temp=x[pivot];
x[pivot]=x[r];
x[r]=temp;
quicksort(x,first,r-1);
quicksort(x,r+1,last);
}
}

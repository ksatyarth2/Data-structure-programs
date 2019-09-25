#include<stdio.h>
void main(){

int a[30],i,n,num,ub,lb,mid;
printf("Enter the number to be entered: ");
scanf("%d",&n);
printf("Enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to search; ");
scanf("%d",&num);
lb=0;
ub=n-1;
mid=(ub+lb)/2;
while(a[mid]!=num && lb<=ub){
if(a[mid]<num){
lb=mid+1;
}
else{
ub=mid-1;
}
mid=(ub+lb)/2;
}
if(a[mid]==num)
printf("Element found");
else
printf("not found");
}

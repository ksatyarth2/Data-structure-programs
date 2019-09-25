#include<stdio.h>
void main(){

int a[30],i,n,num,flag;
printf("Enter the number to be entered: ");
scanf("%d",&n);
printf("Enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to search; ");
scanf("%d",&num);
for(i=0;i<n;i++)
{

if(a[i]==num){
flag=1;
}
}
if(flag==1){
printf("Element found");}
else{printf("not found");
}
}

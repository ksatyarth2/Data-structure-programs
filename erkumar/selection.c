#include<stdio.h>

void main(){
int a[50], i,j,n,temp;
printf("Enter the size of array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
 {
 for(j=i;j<n;j++)
  {
  if(a[i]>a[j])
   {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
  }
 }

for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
 }

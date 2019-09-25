#include<stdio.h>
void main()
{
 int i,j,a[20],temp,n;
 printf("Enter the number of elements: \n");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i;j>=0;j--)
 {
  if(a[j]<a[j-1])
  {
   temp=a[j-1];
   a[j-1]=a[j];
   a[j]=temp;
}
}
}
printf("sorted list is\n");
for(i=0;i<n;i++)
{
  printf("%d\t",a[i]);
}
}

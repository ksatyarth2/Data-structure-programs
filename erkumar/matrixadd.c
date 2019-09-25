#include<stdio.h>
void main(){

int a[20][20],b[20][20],c[20][20],i,j,m,n;
printf("enter the no of rows and columns:" );
scanf("%d%d",&m,&n);
printf("Enter the elements: ");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the second elements: ");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("Addition:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d \t",c[i][j]);
}
printf("\n");
}
}

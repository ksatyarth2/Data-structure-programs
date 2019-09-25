#include<stdio.h>
void main(){

int a[20][20],b[20][20],c[20][20],i,j,k,l,m,n,p,q;
printf("enter the no of rows and columns of first matrix: " );
scanf("%d%d",&m,&n);

printf("enter the no of rows and columns of second matrix: " );
scanf("%d%d",&p,&q);
if(n==p)
{
printf("Enter the elements of first matrix: ");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the second elements: ");
for(k=0;k<p;k++)
{
for(l=0;l<q;l++)
{
scanf("%d",&b[k][l]);
}}
for(i=0;i<m;i++)
{
for(l=0;l<q;l++)
{
c[i][l]=0;
for(j=0;j<n;j++)
{
c[i][l]=c[i][l]+a[i][j]*b[j][l];

}
}}
for(i=0;i<m;i++)
{
for(l=0;l<q;l++)
{
printf("%d\t",c[i][l]);
}
printf("\n");
}	
}
else{printf("Multiplication not possible");}
}

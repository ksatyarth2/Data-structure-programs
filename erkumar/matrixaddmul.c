#include<stdio.h>
void input(int x[3][3]);
void add(int x[3][3], int y[3][3], int z[3][3]);
void display(int x[3][3]);
void multiply(int x[3][3], int y[3][3], int z[3][3]);
int a[3][3],b[3][3],c[3][3],d[3][3];

void main(){
printf("enter first matrix: ");
input(a);
printf("enter the second matrix: ");
input(b);
printf("Matrix Addition: ");
add(a,b,c);
display(c);
printf("Matrix Multiplication: ");
multiply(a,b,d);
display(d);
}

void input(int x[3][3])
{
int i,j;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&x[i][j]);
}
}
}

void add(int x[3][3], int y[3][3], int z[3][3])
{
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
z[i][j]=x[i][j]+y[i][j];
}
}
}

void display(int x[3][3])
{

for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf("%d \t",x[i][j]);
}
printf("\n");
}
 }


void multiply(int x[3][3], int y[3][3], int z[3][3])
{
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{z[i][j]=0;
for(int k=0;k<3;k++){
z[i][j]=z[i][j]+x[i][k]*y[k][j];}
}}
}

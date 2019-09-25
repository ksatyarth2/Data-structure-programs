#include<stdio.h>
void traverse(int);
void insert(int);
void delete(int);

int a[50],n;

void main(){
int p;
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the elements: ");
for(int i=0;i<n;i++){scanf("%d",&a[i]);}
printf("Enter the operation:\n1.Transversing \n2.Insertion\n3.Deletion\n");
scanf("%d",&p);
switch(p){
case 1: traverse(n);break;
case 2: insert(n);break;
case 3: delete(n);
}
}

void traverse(int n){
int lb=0,ub=n-1;
for(int k=0;k<n;k++){
printf("Element at %d index is %d\n",k,a[k]);}
}

void insert(int n){
int item,k;
for(int i=0;i<n;i++){printf("%d ",a[i]);}

printf("Enter the element to insert: ");
scanf("%d",&item);
printf("Enter the index where to insert(0-n): ");
scanf("%d",&k);
for(int j=n;j>=k;j--){
a[j]=a[j-1];
}
a[k]=item;
printf("Array after operation:\n");
for(int i=0;i<n;i++){printf("%d ",a[i]);}
}

void delete(int n){
int item,k;
for(int i=0;i<n;i++){printf("%d ",a[i]);}

printf("Enter the element to delete: ");
scanf("%d",&item);
printf("Enter the index where to delete(0-n): ");
scanf("%d",&k);
int l=a[k];
for(int j=k;j<n;j++){
a[j]=a[j+1];
}
printf("Array after operation:\n");
n--;
for(int i=0;i<n;i++){printf("%d ",a[i]);}

}

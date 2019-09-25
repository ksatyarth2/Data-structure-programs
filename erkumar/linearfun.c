#include<stdio.h>
int input();
int search(int n);

int a[50],flag,n;

void main(){
input();
search(n);
if (flag==1) printf("Element found");
else printf("Not found");
}

int input(){
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter the elements: ");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}return n;
}

int search(int n){
int num;
printf("Enter the element to search: ");
scanf("%d",&num);
for(int i=0;i<n;i++){
if(a[i]==num){
flag=1;
break;
}}
return flag;}

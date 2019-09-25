#include<stdio.h>
int input();
int search(int n);

int a[50],flag,n;

void main(){
input();
search(n);
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
int num,lb,ub,mid;
printf("Enter the element to search: ");
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

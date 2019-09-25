#include<stdio.h>
#include<stdlib.h>
void mergesort(int *, int);
void merge(int *,int *,int *,int,int);
void main()
{
int a[30],n,i;
printf("Enter the no of elements: ");
scanf("%d",&n);
printf("Enter the elements: ");
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
mergesort(a,n);
for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
}

void mergesort(int *a, int n)
	{
	int i,j,k,m;
	int *b,*c;
	if(n>1)
		{
		k=n/2; m=n-k;
		b=(int*)malloc(k*sizeof(int));
		c=(int*)malloc(m*sizeof(int));
		for(i=0;i<k;i++)
			b[i]=a[i];
		for(j=k;j<n;j++)
			c[j-k]=a[j];
		mergesort(b,k);
		mergesort(c,m);
		merge(b,c,a,k,m);
		free(b);free(c);
		}
	}
void merge(int *a,int *b, int *c,int m,int n)
	{
	int i,j,k,p;
	i=j=k=0;
	do
	{
	if(a[i]<b[j])
	{
	c[k]=a[i];i++;}
	else{c[k]=b[j];j++;}
	k++;
	}
	while((i<m)&&(j<n));
	if(i==m)
		{
		for(p=j;p<n;p++)
		{
		c[k]=b[p];k++;
		}
		
		}
	else if(j==m)
		{
		for(p=i;p<m;p++)
			{
			c[k]=a[p];
			k++;
			}
		}
	
	}

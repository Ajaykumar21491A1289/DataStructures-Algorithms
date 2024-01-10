#include<stdio.h>
void main(){
	int n,a[100],i,j,temp;
	printf("enter the size of an array : ");
	scanf("%d",&n);
	printf("enter %d elements in to an array ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
printf("array elements are : ");
for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
printf("the bubble sorting");
for(i=0;i<n;i++)
{
	for(j=0;j<n-i;j++)
	{
		if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("array elements after sorting ");
for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
}


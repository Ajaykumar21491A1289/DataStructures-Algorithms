#include<stdio.h>
void main(){
	int a[100],i,n,ele;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter the %d array elements",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("the array elements are");  
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
	printf("\ninsertion at begining");
	printf("\nenter the inserting element");
	scanf("%d",&ele);
	n=n+1;
	for(i=n-1;i>0;i--)
	{
        a[i]=a[i-1];		
    }
a[0]=ele;
printf("the array elements are");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}  

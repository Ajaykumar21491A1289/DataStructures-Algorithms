#include<stdio.h>
void main(){
	int n,a[100],i,j,temp;//here we are using the technique first we fix the starting element as sorted,and we store that first element in temp,and we compare the remaining elements with that sorted array we check and move the large number to end
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
printf("the insertion sort is");
for(i=0;i<n;i++){
	temp=a[i];//in every pass we will take first element in unsorted sub array and compare with sorted array
	j=i-1;
	while(j>=0&&a[j]>temp)//here it has to satisfy the both condition the ,if anny element in sorted sub array is higher than temp we swap that number 
	{
		a[j+1]=a[j];// ex 5,4,3,2,1  -> here temp=3     ->     her 4>3 now swap    ->   5, ,4,2,1   ->   we make that space blank untill we reach end   ->    5>temp(3) TRUE   ->    -,5,4,2,1   ->      now i=-1 here while loop end with decrement ->    a[j+1]==a[-1+1]=a[0]=temp  ->a[0]=3ss   
		j--;
	}
	a[j+1]=temp;
}
printf("array elements after sortinng : ");
for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	
}	

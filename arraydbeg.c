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
	printf("\n deleting  at begining");
	for(i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
		printf("the array elements after deleting");  
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}

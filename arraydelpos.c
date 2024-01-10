void main(){
	int a[100],i,n,ele,pos;
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
	printf("\ndeleting at specific position");
	printf("\nenter the deleting element");
	scanf("%d",&ele);
	printf("enter the position to delete");
	scanf("%d",&pos);
	for(i=0;i<n;i++)
	{
		if(a[i]==a[pos-1]){
			a[i]=a[i+1];
		}
	}
	n=n-1;
	
printf("the array elements are");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}  

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
	printf("\ninsertion at specific position");
	printf("\nenter the inserting element");
	scanf("%d",&ele);
	printf("enter the position");
	scanf("%d",&pos);
	n=n+1;
	for(i=n-1;i>pos-1;i--)
	{
		a[i]=a[i-1];
    }
    
    
a[pos-1]=ele;
printf("the array elements are");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}  

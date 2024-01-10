#include<stdio.h>
#include<conio.h>
#define size 20
int stack[size],top=-1;
void push(int);
int pop();
void main()
{
	int n,i;
	int arr[n];
	printf("enter n value");
	scanf("%d",&n);
	printf("enter %d values ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		push(arr[i]);
	}
	printf("reversing the array");
	for(i=n-1;i!=-1;i--)
	{
		int ele;
		ele=pop(arr[i]);
		printf("%d",&ele);
	}
}
void push(int x)
{
	if(top==size-1)
	{
		printf("over flow");
	}
	else
	{
		top=top+1;
		stack[top]=x;
	}
}
int pop()
{
	int ele;
	if(top==-1)
	{
		printf("under flow");
	}
	else
	{
		ele=stack[top];
		top--;
	}
	return ele;
}

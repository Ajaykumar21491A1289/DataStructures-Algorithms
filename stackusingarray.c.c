#include<stdio.h>
#include<stdlib.h>
int stack[100],top=-1,n;
void push(int );
void pop();
void peek();
void display();
int main()
{
	int ch,n;

	printf("enter the size of a stack");
	scanf("%d",&n);
	
    do{	
	printf("\n the following are stack operation choose one ");
	printf("\n Enter  your choice:  \n 1.Push  \n  2. pop \n  3. peek \n  4.display ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:  push(n);
				break;
		case 2: pop();
				break;
		case 3: peek();
				break;
		case 4: display();
				break;
		default: printf("invalid choice ");
										
	}
}while(ch!=0);
return 0;
}
void push(int n)
{
	int x;

	if(top==n-1)
	{
		printf("overflow");
	}
else{
	printf("enter a data in to array: ");
	scanf("%d",&x);
	top++;
	stack[top]=x;
}




}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("underflow");
		
	}
	else{
		item=stack[top];
		top--;
		printf("deleted element is %d",item);
		
	}
}
void peek()
{
	if(top==-1){
		printf("stack is empty ");
	}
	else{
		printf("%d",stack[top]);
	}
}
void display()
{
	if(top==0)
	{
		printf("stack is empty plz insert data");
	}
	int i;
	for(i=top;i>=0;i--)
	{
		printf("\n %d",stack[i]);
	}
}

#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=0;
int stack[100],n;
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
	printf("\n stack operation ");
	printf("\n Enter choice:  \n 1.Push  \n  2. pop \n  3. peek \n  4.display ");
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
	int value;
	if(top==n-1){
		printf("Stack is over flow");
	}
	else
	{
		printf("enter the data u want to insert");
	     scanf("%d",&value);
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=top;
		top=newnode;
		
	}
}
void pop()
{
	int temp;
	if(top==0){
		printf("stack underflow");
	}s
	else
	{
		temp=top;
		printf("%d element is poped",top->data);
		top=top->next;
		free(temp);
		
	}
	
}
void display()
{
	struct node *temp;
	temp=top;
	if(top==0){
		printf("stack is empty");
	}
	else{
		while(temp!=0)
		{
			printf(" \n %d",temp->data);
			temp=temp->next;
		}
	}
}
void peek(){
	if(top==0){
		printf("stack is empty");
	}
	else
	{
		printf("top element is %d",&top->data);
	}
}

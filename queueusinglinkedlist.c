#include<stdio.h>
#include<stdlib.h>
#define N 5
struct node{
	int data;
	struct node *next;
};
struct node *front=0,*rear=0;
int queue[N];
void enqueue();
void dequeue();
void peek();
void display();
int main()
{
	int ch;
	
do{	
	printf("\n queue operation are: ");
	printf("\n Enter choice:  \n 1.ENQUEUE \n  2.DEQUUE \n  3.PEEK \n  4.DISPLAY");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1: enqueue();
				break;
		case 2: dequeue();
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
void enqueue()
{
	int value;
	if(rear==N-1){
		printf("queue is over flow");
	}
	else
	{
		struct node *newnode;
		printf("enter the data u want to insert \n");
	    scanf("%d",&value);
	    newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=0;
	    if(front==0 && rear==0)
	    {
	    	front=rear=newnode;
		}
		else
		{
			rear->next=newnode;
			rear=newnode;
		}
		
	}
}
void dequeue()
{
	struct node *temp;
	temp=front;
	if(front==0 && rear==0){
		printf("queue is  empty causes underflow");
	}
	else
	{
		printf("%d element is deleted",front->data);
		front=front->next;
		free(temp);
		
	}
	
}
void display()
{
	struct node *temp;
	temp=front;
	if(front==0 && rear==0){
		printf("queue is empty insert an element to display");
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
	if(front==0 && rear==0){
		printf("queue is empty");
	}
	else
	{
		printf("top element is %d",&front->data);
	}
}

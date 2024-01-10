#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1,rear=-1;
void enqueue( );
void dequeue();
void peek();
void display();
int main()
{
	int ch;
	
    do{	
	printf("\n the following are queue operation choose one ");
	printf("\n Enter  your choice:  \n 1.enqueue  \n  2.dequeue \n  3. peek \n  4.display ");
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
	if(rear==N-1)
	{
		printf("queue is overflow");
	}
	else
	{
		printf("enter the data in to the queue");
		scanf("%d",&value);
		if(front==-1 && rear==-1)
		{
			front=rear=0;
			queue[rear]=value;
		}
		else{
			rear++;
			queue[rear]=value;
		}
	}
}
void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("queue underflow occurs ");
	}
	else if(front==rear){
		printf("the deleted element is %d",queue[rear]);
		front=rear=-1;
	}
	else{
		printf("the deleted element is %d",queue[front]);
		front++;
	}
	              
}
void display()
{
	int i;
	if(rear==-1 && front==-1){
		printf("queue is empty");
	}
	for(i=front;i<rear+1;i++){
		printf("\n %d",queue[i]);
	}
}
void peek()
{
	if(rear==-1 && front==-1){
		printf("queue is empty");
	}
	else{
		printf("%d",queue[front]);
	}
 } 

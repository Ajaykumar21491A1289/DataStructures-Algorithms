#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
 struct node *head=0,*newnode,*temp;

int count=0;
int insertion(int );
int deletion(int );
void display();
void reverse();
int main()
{
	int ch;
	
do{	
	printf("\n SINGLE LIST OPERATION ");
	printf("\n Enter choice:  \n 1.INSERTION  \n 2.DELETION\n 3.DISPLAY\n 4.REVERSE" );
	scanf("%d",&ch);

	switch(ch)
	{
		case 1: count=insertion(count);
				break;
		case 2:count=deletion(count);
		        break;	
		case 3:display();
		        break;	
		case 4:reverse();
		        break;				
		default: printf("invalid choice ");
										
	}
}while(ch!=0);
return 0;
}
int insertion(int count)
{
	int pos,i=1;
		if(head==0)
		{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n WE ARE IN INSERTION FUNCTION");
		printf("\n enter the data you want to insert");
		scanf("%d",&newnode->data);
		newnode->next=0;
		temp=head=newnode;
		count=count+1;
		}
		else
		{
			printf("\n  the count is %d ",count);
			printf("\n enter the position you want to insert");
			scanf("%d",&pos);
			if(pos>count+2)
			{
				printf("\n invalid position");
			}
			else 
			{
				temp=head;
				while(i<pos-1)
				{
					temp=temp->next;
					i++;
				}
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n enter the data you want to insert");
		scanf("%d",&newnode->data);
		newnode->next=0;
		temp=head=newnode;
		count=count+1;
		printf("the count after insertion is %d", count);
		newnode->next=temp->next;
		temp->next=newnode;
			temp=newnode;
			
		}
}
return count;
}
int deletion(int count)
{
	struct node *nextnode;
	int pos,i=1;
	if(head==0)
	{
		printf("\n there is no element to delete insert the element");
		insertion(count);
	}
	else
	{
		printf("the total no.of elements in linked list is %d",count);
		printf("\n enter the position you want to delete");
		scanf("%d",&pos);
		if(pos>count)
		{
			printf("\n invalid position " );
		}
		else
		{
			temp=head;
			while(i<pos-1)
			{
				temp=temp->next;
				i++;
			}
			nextnode=temp->next;
		printf("\n the deleting element is %d in %d position ",nextnode->data,pos);
		temp->next=nextnode->next;
		free(nextnode);
		count=count-1;
		
		}
		
	}
	return count;
}
void display()
{
	if(head==0)
	{
		printf("insert the data to display");
	}
	else{
	
	printf("\n WE ARE AT DISPLAY METHOD ");
	temp=head;
	while(temp!=0)
	{
		printf("\n %d",temp->data);
		temp=temp->next;
	}
}
}
void reverse()
{
	printf("\n WE ARE AT REVSRSE FUNCTION");
	struct node*prevnode,*currentnode,*nextnode;
	prevnode=0;
	currentnode=nextnode=head;
	while(nextnode!=0)
	{
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
prevnode=head;

}


#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=0,*newnode,*temp;
int main()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0){
	temp=head=newnode;
	}
	else{
		newnode->next=head;
		head=newnode;
	}
	for(int i=0;i<100;i++){
		printf("%d",temp->data);
		temp=temp->next;
	}
return 0;	
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct tree
{
int data;
struct tree *left;
struct tree *right;
};
typedef struct tree node;
node *create();
void preorder(node *);
void inorder(node *);
void postorder(node *);
void main()
{
node *root;
clrscr();
printf("enter the root node:");
root=create();
printf("\npre order traversal of tree is: ");
preorder(root);
printf("\nin order traversal of tree is: ");
inorder(root);
printf("\npost order traversal of tree is: ");
postorder(root);
getch();
}
node *create()
{
node *p;
int x;
scanf("%d",&x);
if(x==-1)
return NULL;
p=(node*)malloc(sizeof(node));
p->data=x;
printf("enter left child of %d: ",x);
p->left=create();
printf("enter right child of %d: ",x);
p->right=create();
return p;
}
void preorder(node *t)
{
if(t!=NULL)
{
printf("%d ",t->data);s
preorder(t->left);
preorder(t->right);
}
}
void inorder(node *t)
{
if(t!=NULL)
{
inorder(t->left);
printf("%d ",t->data);
inorder(t->right);
}
}
void postorder(node *t)
{
if(t!=NULL)
{
postorder(t->left);
postorder(t->right);
printf("%d ",t->data);
}
}

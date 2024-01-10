#include<stdio.h>
#include<conio.h>
#define size 10
int stack[size],top=-1;
void push(int);
int pop();
int fact(int);
void main(){
int n,i;
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
push(i);
printf("the factorial of %d is %d",n,fact(n));

}
void push(int ele)
{
	if(top==size-1)
	    printf("stack is overflow");
	else
	{
		top=top+1;
		stack[top]=ele;
	}
}
int pop()
{
	int ele,pro=1;
	if(top==-1)
	printf("stack is under flow");
	else{
	
	ele=stack[top];
	top--;
}
return ele;
}
int fact(int n){
	int i,x,pro=1;
	for(i=1;i<=n;i++){
		x=pop();
		pro=pro*x;
	}
	return pro;
}

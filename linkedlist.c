#include<stdio.h>
#include<stdlib.h>
struct stud{
    int data;
    struct stud *next;
};
typedef struct stud node;
int k,n,count=1;
node *head,*p;
printf("enter how many nodes");
scanf("%d",&n);
for(k=0;k<n;k++){
    if(k==0){
        head=(node*)malloc(sizeof(node));
        p=head;
    }
    else{
        p->next=(node*)malloc(sizeof(node));
        p=p->next;
    }
    printf("enter data");
    scanf("%d",&p->data);
}
p->next=NULL;
printf("the node is");
p=head;
while(p!=NULL){
    printf("%d",p->data);
    p=p->next;
    count++;
}
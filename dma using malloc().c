#include <stdio.h>
#include<stdlib.h>
int main() {
    int n,i,*ptr;
    printf("enter the no.of values: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("enter values : ");
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("entered elements are : ");
    for(i=0;i<n;i++){
        printf("%d",*(ptr+i));
    }
    free(ptr);
}
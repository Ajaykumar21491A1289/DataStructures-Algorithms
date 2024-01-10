#include <stdio.h>

void main(){
    int n;
    printf("enter the number of disc");
    scanf("%d",&n);
    printf("tower of hanoi of %d is",n);
    tower(n,'a','b','c');
    }
    void tower(int n,char beg,char aux,char end)
    {
        if(n<=0)
        printf("invalid entry");
        else if(n==1)
        printf("move disc from %c to %c",beg,end);
        else{
            tower(n-1,beg,end,aux);
            tower(1,beg,aux,end);
            tower(n-1,aux,beg,end);
            
        }
        
    }



enter the number of disc5
tower of hanoi of 5 ismove disc from a to cmove disc from a to bmove disc from c to bmove disc from a to cmove disc from b to amove disc from b to cmove disc from a to cmove disc from a to bmove disc from c to bmove disc from c to amove disc from b to amove disc from c to bmove disc from a to cmove disc from a to bmove disc from c to bmove disc from a to cmove disc from b to amove disc from b to cmove disc from a to cmove disc from b to amove disc from c to bmove disc from c to amove disc from b to amove disc from b to cmove disc from a to cmove disc from a to bmove disc from c to bmove disc from a to cmove disc from b to amove disc from b to cmove disc from a to c
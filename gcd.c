#include<stdio.h>
int gcd(int a,int b){ 
     if(b!=0){
         return gcd(b,a%b);                 
         
     }
     else{
         return a;
     }
    
    
}
void main(){
    int a,b;
    printf("enter the vallues");
    scanf("%d%d",&a,&b);
    printf("the GCD of %d & %d is %d",a,b,gcd(a,b));
}






output:
a=48    b=12
12!=0->true                                12)48(4
                                      48
                                              0
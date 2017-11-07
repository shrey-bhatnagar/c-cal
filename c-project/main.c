#include<stdio.h>
#include "sub1.h"
#include "sub2.h"
//extern int add(int , int );
//extern int sub(int , int );

int main(){
int a=2, b=8, sum=0;
sum = add(a,b);
printf("add: the Sum of num %d + %d is %d\n",a,b,sum);
sum = sub(a,b);
printf("sub: the Sum of num %d - %d is %d\n",a,b,sum);
return 0;
}

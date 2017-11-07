/* Author 	- Shrey Bhatnagar
 * Purpose	- Training
 * Date		- 7-november-2017
 * Description	- A simple program which can print 
 * 			the addition and subraction
 * 			of two number.
 * /

#include<stdio.h>
#include "sub1.h"
#include "sub2.h"

int main(){
int a=2, b=8, sum=0;
char name[10];
sum = add(a,b);
printf("add: the Sum of num %d + %d is %d\n",a,b,sum);
sum = sub(a,b);
printf("sub: the Sum of num %d - %d is %d\n",a,b,sum);

printf("\n\nplease enter your name: ");
scanf("%s",&name);
printf("enterered name as %s",name);

printf("\n\n ---- Finished the run!!!\n");
return 0;
}

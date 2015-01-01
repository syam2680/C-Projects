/* 
/ Fibonacci.c: Syam Kumar M
/ Description: C program to generate the first n terms of the Fibonacci sequence.
*/


#include<stdio.h>


int main(){
	int f1=0,f2=1,f3=0,count=2,num=0;
	scanf("%d",&num);
	printf("%d %d ",f1,f2);
	while(count<=num){
       f3=f2+f1;
       f1=f2;
       f2=f3;
       printf("%d ",f3);	
       count++;
	}
	printf("\n");
}
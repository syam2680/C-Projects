/* 
/ Factorial.c: Syam Kumar M
/ Description: C programs that use both recursive and non-recursive functions to find the factorial of a given integer.
*/
#include<stdio.h>

double factorial_non_recursive(int num){
    double factorial=1;
    while(num>0){
    	factorial*=num--;
    }
	return factorial;
}

double factorial_recursive(int num){
    if(num==1 || num ==0){
    	return 1;
    }
	return num*factorial_recursive(num-1);
}

int main(){
	int num=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	double factorial_1=factorial_non_recursive(num);
	printf("Factorial non recursive : %f\n",factorial_1);
	double factorial_2=factorial_recursive(num);
	printf("Factorial recursive : %f\n",factorial_2);
	return 0;
}

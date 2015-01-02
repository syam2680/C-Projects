/* 
/ Sum.c: Syam Kumar M
/ Description: C program to calculate the Sum -> 1-x2/2!+x4/4!-x6/6!+x8/8!-x10/10!
*/

#include<stdio.h>
#include<math.h>

double factorial(int num){
    double factorial=1;
    while(num>0){
    	factorial*=num--;
    }
	return factorial;
}

int main(){
	int x=10;
	printf("C program to calculate the Sum -> 1-x2/2!+x4/4!-x6/6!+x8/8!-x10/10!\n");
	printf("Enter the value of x:\n");
	scanf("%d",&x);
	double sum=1;
    int exponent=0;
    for(int i=1;i<=5;i++){
    	exponent+=2;
    	sum+=(pow(x,exponent)*pow(-1,i))/factorial(exponent);
    }
    printf("%f \n",sum);
	return 0;
}
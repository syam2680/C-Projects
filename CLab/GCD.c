/* 
/ GCD.c: Syam Kumar M
/ Description: C programs that use both recursive and non-recursive functions to find the GCD of a two given integers.
*/
#include<stdio.h>

int gcd_non_recursive(int num1,int num2){
    while(num2!=0){
    	int temp=num2;
    	num2 = num1 % num2;
    	num1 = temp;
    }
    
	return num1;
}

int gcd_recursive(int num1,int num2){
    if(num2==0){
    	return num1;
    }else{
	return gcd_recursive(num2,num1%num2);
	}
}

int main(){
	int num1=0,num2=0;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	int gcd_1=gcd_non_recursive(num1,num2);
	printf("GCD non recursive : %d\n",gcd_1);
	int gcd_2=gcd_recursive(num1,num2);
	printf("GCD recursive : %d\n",gcd_2);
	return 0;
}

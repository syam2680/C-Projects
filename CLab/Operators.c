/*
/Operators.c: Syam Kumar M
/Description:C program, which takes two integer operands and one operator from the user, performs the
/			 operation and then prints the result. (Consider the operators +,-,*, /, % and use Switch Statement)
*/


#include<stdio.h>


int main(){
	double num1,num2;
	printf("Enter two numbers : \n");
	scanf("%lf %lf",&num1,&num2);
	puts("Enter operator ( +,-,*, /, % ) :");
    char operator;
    scanf(" %c",&operator);
    switch(operator){
    	case '+':
    			 printf("%f + %f = %f \n",num1,num2,num1+num2);
    			 break;
    	case '-':
    			 printf("%f - %f = %f \n",num1,num2,num1-num2);
    			 break;
    	case '*':
    			 printf("%f * %f = %f \n",num1,num2,num1*num2);
    			 break;
    	case '/':
    			 printf("%f / %f = %f \n",num1,num2,num1/num2);
    			 break;
    	case '%':
    			 printf("%f Mod %f = %f \n",num1,num2,(double) ((int)num1 % (int)num2));
    			 break;
    }
	return 0;
}
/* 
/ sumOfDigits.c: Syam Kumar M
/ Description: C program to find the sum of individual digits of a positive integer.
*/


#include<stdio.h>


int main()
{
	int inputNumber=0;
	scanf("%d",&inputNumber);
	int sumOfDigits=0;
	/*
	/The core logic is to extract last digit usign the modulus operator and building the sum.
	/Interger division by 10 removes the last digit
	*/
	while(inputNumber>0){
      sumOfDigits+=inputNumber%10;
      inputNumber/=10;
	}
	printf("%d \n",sumOfDigits);
	return 0;
}
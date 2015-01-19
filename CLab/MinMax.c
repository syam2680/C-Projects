/*
/MinMax.c: Syam Kumar M
/Description:C program to find both the larges and smallest number in a list of integers.
*/

#include<stdio.h>
#include<limits.h>

#define SIZE 10

int main(){
	int min=INT_MAX,max=INT_MIN;
    printf("Enter %d numbers : \n",SIZE);
    for(int i=0;i<SIZE;i++){
    	int number;
    	scanf("%d",&number);
    	if(number>max)
    		max=number;
    	if(number<min)
    		min=number;
    }
    printf("Min is  : %d \n",min);
    printf("Max is  : %d \n",max);
	return 0;
}			 
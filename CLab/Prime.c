/* 
/ Prime.c: Syam Kumar M
/ Description: C program to generate all the prime numbers between 1 and n, where n is a value supplied by the user.
*/


#include<stdio.h>
#include<math.h>

int main(){
	int inputNumber=0;
	scanf("%d",&inputNumber);
	switch(inputNumber)
	{
		case 1:
			printf("%d \n",2);
			break;
		case 2:
			printf("%d %d\n",2,3);
			break;
		default:
			printf("%d %d ",2,3);
			for(int i=5;i<=inputNumber;i++){
				int factors=0;
				for(int j=2;j*j<=i;j++){
					if(i%j==0){
						factors++;
						break;
					}
				}
				if(factors==0)
					printf("%d ",i);
			}
			break;			
	}
	printf("\n");
	return 0;
}
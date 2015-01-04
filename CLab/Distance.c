/*
/Distance.c: Syam Kumar M
/Description:The total distance travelled by vehicle in ‘t’ seconds is given by distance = ut+1/2at2 where ‘u’ and ‘a’
/			 are the initial velocity (m/sec.) and acceleration (m/sec2). Write C program to find the distance travelled at
/			 regular intervals of time given the values of ‘u’ and ‘a’. The program should provide the flexibility to the
/			 user to select his own time intervals and repeat the calculations for different values of ‘u’ and ‘a’.
*/

#include<stdio.h>

double distance(double u,double t,double a){
    return u*t + a*t*t/2;
}

int main(){
	double u=0,t=0,a=0;
	printf("Enter the values of u,t,a: ");
	scanf("%lf %lf %lf",&u,&t,&a);
	printf("Distance travelled is : %f \n",distance(u,t,a));
	char choice='C';
	printf("Press C to continue or Q to quit:\n");
	scanf(" %c",&choice);
	while(choice =='C' || choice =='c'){
		printf("Enter the values of u,t,a: ");
		scanf("%lf %lf %lf",&u,&t,&a);
		printf("Distance travelled is : %f \n",distance(u,t,a));
		printf("Press C to continue or Q to quit:\n");
		scanf(" %c",&choice);
	}
	return 0;
}
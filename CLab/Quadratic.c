/* 
/ Quadratic.c: Syam Kumar M
/ Description: C program to find the roots of a quadratic equation ax^2+bx+c=0.
*/

#include<stdio.h>
#include<math.h>


int main(){
	double r1=0,r2=0;
	double a=0,b=0,c=0;
	printf("C program to find the roots of a quadratic equation ax^2+bx+c=0.\n");
	printf("Enter the co efficients a,b,c :\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	double discriminant=b*b-4*a*c;
	if(discriminant>=0){
		double delta=sqrt(discriminant);
		r1=(-b+delta)/(2*a);
		r2=(-b-delta)/(2*a);
		printf("Roots are :%f,%f \n",r1,r2);
	}else{
		printf("No real roots \n");
	}
	return 0;
}
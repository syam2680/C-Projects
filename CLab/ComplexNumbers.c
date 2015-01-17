/*
/
/ComplexNumbers.c: Syam Kumar M
/Description:C program that uses functions to perform the following operations:
/				i) Reading a complex number
/				ii) Writing a complex number
/				iii) Addition of two complex numbers
/				iv) Multiplication of two complex numbers
/
*/

#include<stdio.h>


typedef struct Complex{
double real;
double imaginary;
} Complex ;


Complex new(double real,double imaginary){
	Complex complexNumber;
	complexNumber.real=real;
	complexNumber.imaginary=imaginary;
	return complexNumber;
}

Complex read(){
	double real=0.0;
	double imaginary=0.0;
	printf("Enter the real part : \n");
	scanf("%lf",&real);
	printf("Enter the imaginary part : \n");
	scanf("%lf",&imaginary);
	return new(real,imaginary);
}


Complex add(Complex num1,Complex num2){
   Complex sum;
   sum.real=num1.real+num2.real;
   sum.imaginary=num1.imaginary+num2.imaginary;
   return sum;
}

Complex subtract(Complex num1,Complex num2){
   Complex difference;
   difference.real=num1.real-num2.real;
   difference.imaginary=num1.imaginary-num2.imaginary;
   return difference;
}

Complex multiply(Complex num1,Complex num2){
   Complex product;
   product.real=num1.real*num2.real-num1.imaginary*num2.imaginary;
   product.imaginary=num1.real*num2.imaginary+num1.imaginary*num2.real;
   return product;
}

Complex conjugate(Complex num){
   Complex complexNumber;
   complexNumber.real=num.real;
   complexNumber.imaginary=-num.imaginary;
   return complexNumber;
}

Complex divide(Complex num1,Complex num2){
   Complex quotient;
   Complex den;
   quotient=multiply(num1,conjugate(num2));
   den=multiply(conjugate(num2),num2);
   quotient.real/=den.real;
   quotient.imaginary/=den.real;
   return quotient;
}

void write(Complex num){
	printf("%1.2lf + i (%1.2lf)\n",num.real,num.imaginary);
}


int main()
{
    Complex num1=read();
    Complex num2=read();
    Complex sum=add(num1,num2);
    Complex difference=subtract(num1,num2);
    Complex product=multiply(num1,num2);
    Complex quotient=divide(num1,num2);
    printf("The First Number is : ");
    write(num1);
    printf("The Second Number is : ");
    write(num2);
    printf("The sum is : ");
    write(sum);
    printf("The Difference is : ");
    write(difference);
    printf("The Product is : ");
    write(product);
    printf("The Quotient is : ");
    write(quotient);
	return 0;
}
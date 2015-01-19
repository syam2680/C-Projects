/*
/Matrix.c: Syam Kumar M
/Description:C program that uses functions to perform the following:
/				i) Addition of Two Matrices
/				ii) Multiplication of Two Matrices
*/


#include<stdio.h>
#include<stdlib.h>

void add(int **a,int **b,int **sum,int n){
   int i=0,j=0;
   for(int i=0;i<n;i++){
   		for(int j=0;j<n;j++){
   			sum[i][j]=a[i][j]+b[i][j];
   		}
    } 
}

void multiply(int **a,int **b,int **product,int n){
   int i=0,j=0,k=0;
   for(int i=0;i<n;i++){
   		for(int j=0;j<n;j++){
   			product[i][j]=0;
   			for(int k=0;k<n;k++){
   				product[i][j]=product[i][j]+a[i][k]*b[k][j];   			
   			}
   		}
   }		
}

void write(int **mat,int n){
   for(int i=0;i<n;i++){
   		for(int j=0;j<n;j++){
   			printf("%d ",mat[i][j]);
   		}
   		printf("\n");
   }
}

int main(){
	int n=0,i=0,j=0;
    printf("Enter dimension : \n");
    scanf("%d",&n);
    int **a = (int **) malloc(sizeof(int *)*n);
        for(i=0; i<n; i++)
        	a[i] = (int *) malloc(sizeof(int)*n);
        	printf("Enter %d values for Matrix A :\n",n*n);
        	for(i=0; i<n; i++){
        		for(j=0; j<n; j++){
        			scanf("%d",&a[i][j]);
        		}
        	}
    int **b = (int **) malloc(sizeof(int *)*n);
        for(i=0; i<n; i++)
        	b[i] = (int *) malloc(sizeof(int)*n);
             printf("Enter %d values for Matrix B :\n",n*n);
        	for(i=0; i<n; i++){
        		for(j=0; j<n; j++){
        			scanf("%d",&b[i][j]);
        		}
        	}
    int **sum = (int **) malloc(sizeof(int *)*n);
        for(i=0; i<n; i++)
        	sum[i] = (int *) malloc(sizeof(int)*n);
    int **product = (int **) malloc(sizeof(int *)*n);
        for(i=0; i<n; i++)
        	product[i] = (int *) malloc(sizeof(int)*n);
    add(a,b,sum,n);
    printf("Sum of A and B : \n");
    write(sum,n);
    multiply(a,b,product,n);
    printf("Product of A and B : \n");
    write(product,n);
    free(a);
    free(b);
    free(sum);
    free(product);
	return 0;
}


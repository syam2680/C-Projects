/*
/ pascalsTriangle.c: Syam Kumar M
/ Description: C program to generate Pascal’s triangle.
*/


#include<stdio.h>
#include<stdlib.h>

void write(int *arr,int n){
  for(int i=0;i<=n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

int main(){
  int *prev;
  int *result;
  int count=1,n=20;
  prev = (int*) calloc(n, sizeof(int));
  prev[0]=1;
  write(prev,0);
  result = (int*) calloc(n, sizeof(int));
  result[0]=1;
  result[1]=1;
  write(result,1);
  while(count++<=n/2){
    int i;
  for(i=1;i<count;i++){
      prev[i]=result[i]+result[i-1];
  }
  prev[i]=1;
  write(prev,i);
  int *temp=prev;
  prev = result;
  result = temp;
}
  free(result);
  free(prev);
  return 0;
}

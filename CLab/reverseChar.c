/*
/ reverseChar.c: Syam Kumar M
/ Description: C program to reverse the first n characters in a file.
*/


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  FILE *input;
  
  if(argc != 3){
    printf("Use like ./reverseChar <File>  <n (Number of characters)> \n");
    exit(0);
  }
  input=fopen(argv[1],"r");
  int n=atoi(argv[2]);
  char data;
  char *string=(char*)calloc(n+1,sizeof(char));
  string[n--]='\0';
  int newLine=1;
  while((data=getc(input))!=EOF){
      if(n>=0){
          string[n--]=data;
          if(n<0){
            printf("%s",string);
          }
      }
      else{
      newLine=0; 
      putchar(data);
    }
  }
  if(newLine){
    printf("\n");
  }
  if(n>0){
    printf("%s",string);
    printf("\n");
  }
  fclose(input);
  return 0;
}

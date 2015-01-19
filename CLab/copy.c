/*
/ copy.c: Syam Kumar M
/ Description: C program which copies one file to another.
*/


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  FILE *source, *destination;
  if(argc != 3){
    printf("Use like ./copy source destination\n");
    exit(0);
  }
  source=fopen(argv[1],"r");
  destination=fopen(argv[2], "w");
  char data;
  while((data=getc(source))!=EOF){
      putc(data,destination);
  }
  fclose(source);
  fclose(destination);
  return 0;
}

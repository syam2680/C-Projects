/* 
/ counter.c: Syam Kumar M
/ Description: C program to count the lines, words and characters in a given text.
*/
#include<stdio.h>


int main(){
    char data,prev;
    int charCount=0,wordCount=0,lineCount=0;
    while((data=getc(stdin))!=EOF){
        if(data==' ' && charCount > 0 && prev !=' '){
            wordCount++;
            charCount++;
        }else if(data=='\n'){
            charCount++;
            wordCount++;
            lineCount++;
        }
        else{
            charCount++;
        }
        prev=data;
    }
    printf("Number of Characters : %d\n",charCount);
    printf("Number of Words : %d\n",wordCount);
    printf("Number of Lines : %d\n",lineCount);
	return 0;
}

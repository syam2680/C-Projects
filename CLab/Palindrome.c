/* 
/ Palindrome.c: Syam Kumar M
/ Description: C program to determine if the given string is a palindrome or not.
*/
#include<stdio.h>
#include<string.h>

#define MAX_SIZE 1024
#define bool int
#define true 1
#define false 0

int main(){
    char inputString[MAX_SIZE];
    bool isPalindrome=1;
    //fgets ( inputString, MAX_SIZE, stdin ); 
    scanf("%s",inputString);
    for(int i=0;i<strlen(inputString)/2;i++){
    	//Check if first and last characters are same and continue looking in a similar fashion.
    	if(inputString[i]!=inputString[strlen(inputString)-1-i]){
    			isPalindrome=0;
    			break;
    	}
    } 
    if(isPalindrome){
    	printf("Input String is a Palindrome\n");
    }else{
    	printf("Input String is not a Palindrome\n");
    }
	return 0;
}

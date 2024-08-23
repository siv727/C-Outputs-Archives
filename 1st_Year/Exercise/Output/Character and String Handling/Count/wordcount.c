#include <stdio.h>
#include <ctype.h>
#define MAX 100

int wordCount(char str[]);

int main(){
	char str[MAX];
	printf("Input the string: ");
	fgets(str, MAX, stdin);
	printf("Total number of words in the string is: %d", wordCount(str));
	return 0;	
}

int wordCount(char str[]){
	int i, count = 0;
	for(i = 0; str[i]!='\0'; i++){
		if((ispunct(str[i]) || isspace(str[i])) && isalpha(str[i-1]))
			count++;
	}
	return count;
}

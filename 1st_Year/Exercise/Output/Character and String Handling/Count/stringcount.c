#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int main(){
	char str[MAX];
	printf("Input the string: ");
	fgets(str, MAX, stdin);

	int i, alpha = 0, digit = 0, specChar = 0, len = strlen(str)-1;
	for(i = 0; i < len; i++){
		if(isdigit(str[i]))
			digit++;
		else if(isalpha(str[i]))
			alpha++;
		else
			specChar++;
	}
	
	printf("Number of Alphabets in the string is: %d\n", alpha);
	printf("Number of Digits in the string is: %d\n", digit);
	printf("Number of Special characters in the string is: %d\n", specChar);
	
	return 0;
}

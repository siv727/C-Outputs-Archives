#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int main() {
	char str1[SIZE];
	char str2[SIZE];
	int i, j, countPattern = 0;
	
	printf("Input text string: ");
	fgets(str1, SIZE, stdin);
	
	printf("Input pattern string: ");
	fgets(str2, SIZE, stdin);
	
	int patternLen = strlen(str2)-1;
	int textLen = strlen(str1)-1;
	
	
	for(i = 0; str1[i] != '\0'; i++) {
		if(strncasecmp(&str1[i], str2, patternLen) == 0) {
			if((i == 0 || !isalpha(str1[i-1])) && (i+patternLen == textLen || !isalpha(str1[i+patternLen]))) {
				for(j = 0; j<patternLen; j++){
					str1[i+j] = toupper(str1[i+j]);
				}
				countPattern++;
				i+=patternLen-1;
			}
		}
	}

	printf("%s", str1);
	printf("Number of occurences: %d", countPattern);
		
	return 0;
}

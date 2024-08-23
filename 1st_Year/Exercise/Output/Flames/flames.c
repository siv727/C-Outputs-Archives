#include <stdio.h>
#include <string.h>
#include <ctype.h>

void uppercase(char name[], int size);
void space_remove(char name[], int* size);
int match_compare(char name1[], char name2[], int size1, int size2);
char flames(int match_ct);
void display_flames(char letter);

int main(){
	char name1[50];
	char name2[50];
	int name1_len, name2_len, letter1_ct, letter2_ct;
	
	printf("Enter the name of the first person: ");
	fgets(name1, 50, stdin);
	
	printf("Enter the name of the second person: ");
	fgets(name2, 50, stdin);
	
	name1_len = strlen(name1)-1;
	name2_len = strlen(name2)-1;
	
	space_remove(name1, &name1_len);
	space_remove(name2, &name2_len);
	
	uppercase(name1, name1_len);
	uppercase(name2, name2_len);
	
	letter1_ct = match_compare(name1, name2, name1_len, name2_len);
	letter2_ct = match_compare(name2, name1, name2_len, name1_len);

	printf("\nCorresponding letter of the first inputted name: ");
	display_flames(flames(letter1_ct));
	printf("Corresponding letter of the second inputted name: ");
	display_flames(flames(letter2_ct));
	printf("Corresponding letter of both names: ");
	display_flames(flames(letter1_ct + letter2_ct));
}

void uppercase(char name[], int size){
	int i;
	for(i = 0; i<size; i++)
		toupper(name[i]);
}

void space_remove(char name[], int* size){
	int i, j;
	for(i = 0; i<*size; i++){
		if(name[*size-1] == ' ')
			(*size)--;
		else if(name[i] == ' '){
			for(j = i; j<*size; j++)
				name[j] = name[j+1];
			(*size)--;
		}
	}	
}

int match_compare(char name1[], char name2[], int size1, int size2){
	int i, j, match_ct = 0;
	for(i = 0; i<size1; i++){
		for(j = 0; j<size2; j++){
			if(name1[i]==name2[j]){
				match_ct++;
				name1[i] = '/';
				name2[j] = '/';
				break;
			}
		}
	}
	return match_ct;
}

char flames(int match_ct){
	int i;
	char flames_arr[7] = {'F', 'L', 'A', 'M', 'E', 'S'};
	if(match_ct>6 && match_ct%6!=0)
		match_ct%=6;
	else if(match_ct%6==0)
		match_ct = 6;
	return flames_arr[match_ct-1];
}

void display_flames(char letter){
	switch(letter){
		case 'F':
			printf("F -> Friends\n\n");
			break;
		case 'L':
			printf("L -> Lovers\n\n");
			break;
		case 'A':
			printf("A -> Adversaries\n\n");
			break;
		case 'M':
			printf("M -> Married\n\n");
			break;
		case 'E':
			printf("E -> Enemies\n\n");
			break;
		case 'S':
			printf("S -> Sweethearts\n\n");
			break;
	}
}
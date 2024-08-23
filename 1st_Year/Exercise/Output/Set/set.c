#include <stdio.h>
#define MAX 10

typedef int Set[MAX];

void initialize(int *count){
	*count = 0;
}

void display(Set s, int count){
	int i = 0;
	for(i; i<count; i++)
		printf("%d ", s[i]);
}

void addEnd(Set s, int *count, int elem){
	if(contains(s, *count, elem)==0){
		s[(*count)++] = elem;
	}
}

int contains(Set s, int count, int elem){
	int i = count - 1;
	while(i>=0){
		if(s[i]==elem)
			return 1;
		i--;
	}
	return 0;
}

void getUnion(Set result, int *count, Set s1, int count1, Set s2, int count2){
	int i;
	initialize(count);
	for(i = 0; i<count1; i++){
		if(!contains(result, *count, s1[i])){
			result[*count] = s1[i];
			(*count)++;
		}
	}
	for(i = 0; i<count2; i++){
		if(!contains(result, *count, s2[i])){
			result[*count] = s2[i];
			(*count)++;
		}
	}
}

void intersection(Set result, int *count, Set s1, int count1, Set s2, int count2){
	int i;
	initialize(count);
	for(i= 0; i<count1; i++){
		if((contains(s2, count2, s1[i]))){
			result[*count] = s1[i];
			(*count)++;
		}
	}
}

void difference(Set result, int *count, Set s1, int count1, Set s2, int count2){
	int i;
	initialize(count);
	for(i= 0; i<count1; i++){
		if(!(contains(s2, count2, s1[i]))){
			result[*count] = s1[i];
			(*count)++;
		}
	}
}

void symmetricdifference(Set result, int *count, Set s1, int count1, Set s2, int count2){
	int i;
	initialize(count);
	for(i=0; i<count1; i++){
		if(!contains(s2, count2, s1[i])){
			result[*count] = s1[i];
			(*count)++;
		}
	}
	for(i=0; i<count2; i++){
		if(!contains(s1, count1, s2[i])){
			result[*count] = s2[i];
			(*count)++;
		}
	}
}

int subset(Set s1, int count1, Set s2, int count2){
	int i;
	for(i=0; i<count1; i++){
		if(!contains(s2, count2, s1[i])){
			return 0;
		}
	}
	return 1;	
}

int disjoint(Set s1, int count1, Set s2, int count2){
	int i;
	for(i = 0; i<count1; i++){
		if(contains(s2, count2, s1[i])){
			return 0;
		}
	}
	return 1;
}

int equal(Set s1, int count1, Set s2, int count2){
	int i, ans1, ans2;
	for(i=0; i<count1; i++){
		if(contains(s2, count2, s1[i])){
			ans1 = 0;
		}
		else{
			ans1 = 1;
		}
	}
	for(i=0; i<count2; i++){
		if(contains(s1, count1, s2[i])){
			ans2 = 0;
		}
		else{
			ans2 = 1;
		}
	}
	return (ans1 == 1 && ans2 == 1) ? 1 : 0;
}

void addFrontV1(Set s, int *count, int elem){
	int i;
	for(i = *count; i>0; i--){
		s[i]=s[i-1];
	}
	s[0]=elem;
	(*count)++;
}

void addFrontV2(Set s, int *count, int elem){
	int i;
	for(i = (*count)-1; i>=0; i--){
		s[i+1]=s[i];
	}
	s[0]=elem;
	(*count)++;
}

void addAtV1(Set s, int *count, int elem, int index){
	int i;
	for(i = *count; i>index; i--){
		s[i]=s[i-1];
	}
	s[index]=elem;
	(*count)++;
}

void addAtV2(Set s, int *count, int elem, int index){
	int i;
	for(i = (*count)-1; i>=index; i--){
		s[i+1]=s[i];
	}
	s[index]=elem;
	(*count)++;
}

void deleteEnd(int *count){
	(*count)--;
}

void deleteFrontV1(Set s, int *count){
	int i;
	for(i = 0; i<(*count)-1; i++){
		s[i]=s[i+1];
	}
	(*count)--;
}

void deleteFrontV2(Set s, int *count){
	int i;
	for(i = 1; i<(*count)-1; i++){
		s[i-1]=s[i];
	}
	(*count)--;
}

void deleteAtV1(Set s, int *count, int index){
	int i;
	for(i = index; i<(*count)-1; i++){
		s[i]=s[i+1];
	}
	(*count)--;
}

void deleteAtV2(Set s, int *count, int index){
	int i;
	for(i = index+1; i<(*count); i++){
		s[i-1]=s[i];
	}
	(*count)--;
}

#include <stdio.h>

void add(int answer[], int *count, int item){
	int i, j;
	answer[(*count)++] = item;
//	for(i = 0; i<*count; i++){
//		int temp = answer[i+1];
//		for(j = i+1; j>0; j--){
//			if(temp<answer[j-1]){
//				answer[j]= answer[j-1];
//				answer[j-1] = temp;
//			}
//			else
//				continue;
//		}
//	}
	for(i = *count-1; i>0; i--){
		int temp = answer[i];
		for(j = i; j>0; j--){
			if(temp<answer[j-1]){
				answer[j]= answer[j-1];
				answer[j-1] = temp;
			}
			else
				continue;
		}
	}
}

float mean(int answer[], int size){
	int total = 0, i;
	for(i=0; i<size; i++)
		total+=answer[i];
	return total/2.0;
}

float median(int answer[], int size){
	float median;
	if (size % 2 == 0)
        median = (answer[size / 2 - 1] + answer[size / 2]) / 2.0;
    else
        median = answer[size / 2];
        
    return median;
}

int max(int answer[], int size){
	return answer[size-1];
}

int min(int answer[], int size){
	return answer[0];
}

int range(int answer[], int size){
	return max(answer, size) - min(answer, size);
}

void mode(int freq[], int freqsize, int answer[], int size, int modes[], int *modecount){
	int i, j, high_freq = freq[0];
//	-----------------------FIRST SOLUTION----------------------------
//	for(i = 0;i<size; i++){
//		for(j=0; j<size; j++){
//			if(i==answer[j])
//				freq[i]+=1;
//		}
//	}
//	for(i=1; i<size; i++){
//		if(high_freq<freq[i]){
//			high_freq = freq[i];
//			modes[*modecount] = i;
//		}
//		else if(high_freq==freq[i]){
//			*modecount+=1;
//			modes[*modecount] = i;
//		}
//		else
//			continue;
//	}
//	-------------------EFFICIENT SOLUTION----------------------------
	for (i = 0; i < size; i++) {
	    freq[answer[i]]++;
	    if (freq[answer[i]] > 1 && freq[answer[i]] > high_freq) {
	      high_freq = freq[answer[i]];
	      *modecount = 1;
	      modes[0] = answer[i];
		} else if (freq[answer[i]] > 1 && freq[answer[i]] == high_freq) {
	      modes[(*modecount)++] = answer[i];
	    }
  	}
  	if(*modecount == 0)
  		printf("%d", 0);
	else{
		for(i=0; i<*modecount; i++)
			printf("%d ", modes[i]);
	}
	printf("\n");
}

void histogram(int freq[], int size){
	int i,j;
	for(i = 1; i < size; i++){
        printf("%d: ", i);
        for (j = 0; j < freq[i]; j++)
            printf("*");
        printf("\n");
    }
    printf("\n");
}

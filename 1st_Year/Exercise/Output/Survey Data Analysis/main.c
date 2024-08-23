#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "survey.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int response[10] = {1,2,7,3,2,9,4,4,6};
	int response[10];
	int count = 0, modeCount = 0, freqsize = 10, i, item, choice;
	int freq[10] = {0};
	int modes[10];

	do{
		printf("SURVEY DATA ANALYSIS\n\n");
		printf("1: Input\n2: Mean\n3: Median\n4: Mode\n5: Minimum\n6: Maximum\n7: Range\n8: Histogram\n0: Exit\n");
		printf("What to do? ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Input a value from 1-9: ");
				scanf("%d", &item);
				if(item > 0 && item < 10){
					add(response, &count, item);
					for(i = 0; i<count; i++)
						printf("%d ", response[i]);
					printf("\n\n");
					break;
				}
				else{
					printf("INVALID NUMBER!!\n\n");
					break;
				}
			case 2:
				printf("Mean: ");
				printf("%.3f\n\n", mean(response, count));
				break;
			case 3:
				printf("Median: ");
				printf("%.3f\n\n", median(response, count));
				break;
			case 4:
				printf("Mode: ");
				mode(freq, freqsize, response, count, modes, &modeCount);
				printf("\n");
				modeCount = 0;
				for (i = 0; i < 10; i++) {
					freq[i] = '\0';
					modes[i] = '\0';
				}
				break;
			case 5:
				printf("Minimum: ");
				printf("%d\n\n", min(response, count));
				break;
			case 6:
				printf("Maximum: ");
				printf("%d\n\n", max(response, count));
				break;
			case 7:
				printf("Range: ");
				printf("%d\n\n", range(response, count));
				break;
			case 8:
				histogram(freq, freqsize);
				break;
			case 0:
				printf("Exiting Now...\n");
				break;
			default:
				printf("INVALID INPUT!! TRY AGAIN\n\n");
				break;
		}
		usleep(1000000);
		system("cls");
	}
	while(choice != 0);




//	printf("Initial: ");
//	for(i = 0; i<count; i++){
//		printf("%d ", response[i]);
//	}
//	
//	printf("\nAdded: ");
//	add(response, &count, 8);
//	for(i = 0; i<count; i++){
//		printf("%d ", response[i]);
//	}
//	
//	printf("\nMean: ");
//	printf("%.3f\n", mean(response, count));
//	
//	printf("Median: ");
//	printf("%.3f\n", median(response, count));
//	
//	printf("Maximum: ");
//	printf("%d\n", max(response, count));
//	
//	printf("Minimum: ");
//	printf("%d\n", min(response, count));
//	
//	printf("Range: ");
//	printf("%d\n", range(response, count));
//	
//	printf("Mode: ");
//	mode(freq, freqsize, response, count, modes, &modeCount);
//	
//	histogram(freq, count);
	return 0;
}
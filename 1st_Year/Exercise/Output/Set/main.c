#include <stdio.h>
#include <stdlib.h>
#include "set.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Set A = {1,2,3};
	Set B = {2,3,4,5,6,7};
	int count=3;
	Set result;
	int countA = 3, countB = 6;
	
	//Initializing count
	initialize(&count);
	printf("%d\n\n", count);
	
	//Finding an element in the set
	printf("%d\n\n", contains(A, countA, 5));
	printf("%d\n\n", contains(A, countA, 3));
	
	//Add towards the end
	addEnd(A, &countA, 4);
	display(A, countA);
	printf("\n\n");
	
	//Add in front version 1 (see definition for difference)
	addFrontV1(A, &countA, 0);
	display(A, countA);
	printf("\n\n");
	
	//Add in front version 2 (see definition for difference)
	addFrontV2(A, &countA, -1);
	display(A, countA);
	printf("\n\n");
	
	//Add at a specific position version 1 (see definition for difference)
	addAtV1(A, &countA, 5, 6);
	display(A, countA);
	printf("\n\n");
	
	//Add at a specific position version 2 (see definition for difference)
	addAtV1(A, &countA, 6, 7);
	display(A, countA);
	printf("\n\n");
	
	//Union of 2 sets
	getUnion(result, &count, A, countA, B, countB);
	display(result, count);
	printf("\n\n");
	
	//Intersection of 2 sets
	intersection(result, &count, A, countA, B, countB);
	display(result, count);
	printf("\n\n");
	
	//Difference of 2 sets
	difference(result, &count, A, countA, B, countB);
	display(result, count);
	printf("\n\n");
	
	//Symmetric difference of 2 sets
	symmetricdifference(result, &count, A, countA, B, countB);
	display(result, count);
	printf("\n\n");
	
	//Determining if Set A is a subset of Set B
	((subset(A, countA, B, countB)==1)) ? printf("True\n\n") : printf("False\n\n");
	
	//Determining if 2 sets are disjoint
	((disjoint(A, countA, B, countB)==1)) ? printf("True\n\n") : printf("False\n\n");
	
	//Determining if 2 sets are equal
	((equal(A, countA, B, countB)==1)) ? printf("True\n\n") : printf("False\n\n");
	
	//Delete in front version 1 (see definition for difference)
	deleteFrontV1(A, &countA);
	display(A, countA);
	printf("\n\n");
	
	//Delete in front version 2 (see definition for difference)
	deleteFrontV2(A, &countA);
	display(A, countA);
	printf("\n\n");
	
	//Delete at a specific position version 1 (see definition for difference)
	deleteAtV1(B, &countB, 2);
	display(B, countB);
	printf("\n\n");
	
	//Delete at a specific position version 2 (see definition for difference)
	deleteAtV2(B, &countB, 3);
	display(B, countB);
	return 0;
}

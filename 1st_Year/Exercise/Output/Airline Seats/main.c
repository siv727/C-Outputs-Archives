#include <stdio.h>
#include <stdlib.h>
#include "airline.h"
#define SEAT_CAP 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int seats[SEAT_CAP] = {0};
	int seatType = 0;
	int assignedSeat;
	initSeats(seats, SEAT_CAP);
	printf("Welcome to MGM Airlines!\n\n");
	displaySeats(seats, SEAT_CAP);
	
	do{
		printf("Please type 1 for first class: \n");
		printf("Please type 2 for economy: \n");
		printf("Which seat would you like? ");
		scanf("%d", &seatType);
		
		assignedSeat = assignSeat(seats, seatType);
		if(assignedSeat != -1){
			boardPass(assignedSeat);
			displaySeats(seats, SEAT_CAP);
		} 
		else{
			exxit();
			assignedSeat = -1;
			seatType = 0;
		}
	}
	while(assignedSeat != -1 || seatType != 0);
	
	
	return 0;
}

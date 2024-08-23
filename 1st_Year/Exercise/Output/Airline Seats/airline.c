#include <stdio.h>
#define SEAT_CAP 10

void initSeats(int seats[], int size){
	int i;
	for(i = 0; i<size; i++){
		seats[i]=0;
	}
}
void displaySeats(int seats[], int size){
	int i;
	printf("First Class Section: ");
	for(i = 0; i<size/2; i++){
		printf("[%d] ", seats[i]);
	}
	printf("\nEconomy Section:     ");
	for(i = size/2; i<size; i++){
		printf("[%d] ", seats[i]);
	}
	printf("\n\n");
}
int assignSeat(int st[], int seaType){
	int seat;
	if(seaType == 1){
		seat =  assignFirstClass(st, SEAT_CAP);
		if(seat<=5)
			return seat;
		else
			return -1;
	}
	else if (seaType == 2){
		seat = assignEconomy(st, SEAT_CAP);
		if(seat>=5 && seat<=10)
			return seat;
		else
			return -1;
	}
	else
		return -1;
}
int assignFirstClass(int seats[], int size){
	int i;
	char choice;
	for(i = 0; i<size/2; i++){
		if(seats[i]==0){
			seats[i] = 1;
			return i+1;	
		}
	}
	do{
		printf("Would you like to move to Economy Class? ");
		choice = getch();
		if(choice == 'y' || choice == 'Y')
			assignSeat(seats, 2);
		else
			return -1;	
	}
	while(choice != 'y' || choice != 'Y');
}
int assignEconomy(int seats[], int size){
	int i;
	char choice;
	for(i = size/2; i<size; i++){
		if(seats[i]==0){
			seats[i] = 1;
			return i+1;	
		}
	}
	do{
		printf("Would you like to move to First Class? ");
		choice = getch();
		if(choice == 'y' || choice == 'Y')
			assignSeat(seats, 1);
		else
			return -1;	
	}
	while(choice != 'y' || choice != 'Y');
}
void boardPass(int seat){
	printf("\nBoarding Pass\n");
	if(seat<6){
		printf("First Class Section\n");
		printf("Seat #%d\n\n", seat);
	}
	else{
		printf("Economy Section\n");
		printf("Seat #%d\n\n", seat);
	}
}
void exxit(){
	printf("\nNext flight leaves in 3 hours.\n\n");
}

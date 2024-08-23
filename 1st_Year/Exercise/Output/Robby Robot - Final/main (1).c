#include <iostream>
#include "robot.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x = 0, y = 0;
	char command;
	
	do{
		command = printCommand();
		system("cls");
		switch(command){
			case 'a':
				initialize(&x, &y);
				break;
			case 'b':
				printLocation(x, y);
				break;
			case 'c':
				move(&x, &y);
				break;
			case 'd':
				exitt();
				break;
			default:
				printf("Please enter a valid command.\n");
				break;
		}
	}	
	while(command != 'd');
	
	return 0;
}

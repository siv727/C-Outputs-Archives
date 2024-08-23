#include <stdio.h>
#include <unistd.h>

char printCommand(void){
	char command;
	printf("Robby Robot\n\n");
	printf("a)\tOrigin\n");
	printf("b)\tLocation\n");
	printf("c)\tMove\n");
	printf("d)\tExit\n\n");
	printf("What should Robby do? ");
	scanf(" %c", &command);
	return command;
}

void initialize(int *x, int *y){
	*x = 0;
	*y = 0;
	printf("Robby Robot is back to the point of origin\n\n");
}

void printLocation(int x, int y){
	printf("Location of Robby Robot is in (%d, %d) of the Cartesian Plane\n\n", x, y);
}

void move(int *x, int *y){
	int direction, distance;
	printf("Move to where?\n\n");
	printf("2 -> South\n");
	printf("4 -> West\n");
	printf("6 -> East\n");
	printf("8 -> North\n");
	printf("\nInput the direction and distance: ");
	scanf("%d %d", &direction, &distance);
	switch(direction){
		case 2:
			*y -= distance;
			printf("\nRoby Robot moved %d steps towards South\n\n", distance);
			break;
		case 4:
			*x -= distance;
			printf("\nRobby Robot moved %d steps towards West\n\n", distance);
			break;
		case 6:
			*x += distance;
			printf("\nRobby Robot moved %d steps towards East\n\n", distance);
			break;
		case 8:
			*y += distance;
			printf("\nRobby Robot moved %d steps towards North\n\n", distance);
			break;
		default:
			printf("\nInvalid direction\n\n");
	}
	sleep(3);
	system("cls");
}
void exitt(void){
	printf("Program terminated. Thank you!\n\n");
}

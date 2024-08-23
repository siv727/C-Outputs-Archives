#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

void display2d(int matrixRes[][COL], int row, int col);
void input(int matrix[][COL]);

int main(int argc, char *argv[]) {
	int matrix1[ROW][COL] = {0};
	int matrix2[ROW][COL] = {0};
    int matrixRes[ROW][COL] = {0}; 
	
	printf("Enter the values for Matrix A: ");
	input(matrix1);
	
	printf("Enter the values for Matrix B: ");
	input(matrix2);
	
	printf("\nMatrix A values:\n");
	display2d(matrix1, ROW, COL);
	
	printf("\nMatrix B values:\n");
	display2d(matrix2, ROW, COL);
	
	printf("\nAddition:\n");
	add(matrixRes, matrix1, matrix2, ROW, COL);
	display2d(matrixRes, ROW, COL);
	printf("\n");
	
	printf("Subtraction:\n");
	subtract(matrixRes, matrix1, matrix2, ROW, COL);
	display2d(matrixRes, ROW, COL);
	printf("\n");
	
	printf("Multiplication:\n");
	multiply(matrixRes, matrix1, matrix2, ROW, COL);
	display2d(matrixRes, ROW, COL);
	
	return 0;
}

void display2d(int matrixRes[][COL], int row, int col){
	int i,j;
	for(i = 0; i<row; i++){
		for(j = 0; j<col; j++){
			printf("%10d", matrixRes[i][j]);
		}
		printf("\n");
	}
}

void input(int matrix[][COL]){
	int i, j;
	for(i = 0; i<ROW; i++){
		for(j = 0; j<COL; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
}
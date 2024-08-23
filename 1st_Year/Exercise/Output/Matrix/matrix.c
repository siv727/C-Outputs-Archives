#include <stdio.h>
#include "matrix.h"

void add(int matrixResult[][COL],int matrixA[][COL],int matrixB[][COL],int row,int col){
	int i, j;
	for(i = 0; i<row; i++){
		for(j = 0; j<col; j++){
			matrixResult[i][j] = matrixA[i][j] + matrixB[i][j];
		}
	}
}

void subtract(int matrixResult[][COL],int matrixA[][COL],int matrixB[][COL],int row,int col){
	int i, j;
	for(i = 0; i<row; i++){
		for(j = 0; j<col; j++){
			matrixResult[i][j] = matrixA[i][j] - matrixB[i][j];
		}
	}
}

int dotProd(int matrixA[][COL],int matrixB[][COL],int row,int col){
	int i, res = 0;
	for(i = 0; i<COL; i++){
		res += matrixA[row][i] * matrixB[i][col];
	}
	return res;
}

void multiply(int matrixResult[][COL],int matrixA[][COL],int matrixB[][COL],int row,int col){
	int i, j;
	for(i = 0; i<row; i++){
		for(j = 0; j<col; j++){
			matrixResult[i][j] = dotProd(matrixA, matrixB, i, j);
		}
	}
}


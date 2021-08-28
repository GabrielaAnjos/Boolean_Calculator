#include <stdio.h>
#include <conio.h>

int main() {

	setbuf(stdout, NULL);

	int i, j, linA, colA, linB, colB, x, aux=0;


	printf("\n     	BOOLEAN PRODUCT\n\n");
	printf("\nEnter the number of rows of matrix A : ");
	scanf("%d",&linA);
	printf("\nEnter the number of columns of matrix A : ");
	scanf("%d",&colA);
	printf("\nEnter the number of rows of matrix A B : ");
	scanf("%d",&linB);
	printf("\nEnter the number of columns of matrix B : ");
	scanf("%d",&colB);

	float matrixA[linA][colA], matrixB[linB][colB], matrixC[linA][colB];

	if(colA == linB) {

		for(i = 0; i < linA; i++) {
			for(j = 0; j < colA; j++) {
				printf("\n\n Enter the value of %d%c row and the %d%c columns of matrix A: ", i+1, 167, j+1, 167);
				scanf("%f", &matrixA[i][j]);
			}
			printf("\n");
		}

		for(i = 0; i < linB; i++) {
			for(j = 0; j < colB; j++) {
				printf("\n\n Enter the value of %d%c row and the %d%c columns of matrix B: ", i+1, 167, j+1, 167, 167);
				scanf("%f", &matrixB[i][j]);
			}
			printf("\n");
		}

		printf("========================== matrix A ==========================\n\n");

		for(i = 0; i < linA; i++) {
			for(j = 0; j < colA; j++) {
				printf("%4.f", matrixA[i][j]);
			}
			printf("\n\n");
		}

		printf("========================== matrix B ==========================\n\n");
		for(i = 0; i < linB; i++) {
			for(j = 0; j < colB; j++) {
				printf("%4.f", matrixB[i][j]);
			}
			printf("\n\n");
		}

		printf("================== Boolean product A (x) B ==================\n\n");

		for(int i = 0; i < linA; i++) {
			for(int j = 0; j < colB; j++) {

				matrixC[i][j] = 0;

				for(x = 0; x < linB; x++) {

					if(matrixA[i][x] == 0 && matrixB[x][j] == 0){
					aux += 0;

					} else if ( (matrixA[i][x] == 1 && matrixB[x][j] == 0)) {
					aux += 0;

					} else if (matrixA[i][x] == 0 && matrixB[x][j] == 1) {
					aux += 0;

					} else if (matrixA[i][x] == 1 && matrixB[x][j] == 1) {
					aux = 1;
					}
				}

			matrixC[i][j] = aux;
			aux = 0;
			}
		}

		for(int i = 0; i < linA; i++) {
			for(int j = 0; j < colB; j++) {
				printf("%4.f", matrixC[i][j]);
			}
			printf("\n\n");
		}
		printf("\n\n");


	} else {
		printf("\n\n There is no way to multiply the informed matrices.");
	}
}

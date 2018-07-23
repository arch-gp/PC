#include<stdio.h>

int main(){
	int m[3][3], i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
		scanf("%d", &m[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
		printf("%d \t", m[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	printf("Diagonal Secundaria(backwards): %d, %d, %d\n", m[2][0], m[1][1], m[0][2]);
	return 0;
}

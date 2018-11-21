//library functions
#include<stdio.h>
#include <stdlib.h>

int main(){
	//declare 2 different 2d arrays for input
	int mat1[2][2];
	int mat2[2][2];
	
	printf("Inputting for Matrix A: \n"); //start input for mat1
	for(int i=0;i<2;i++){//first loop for row
		for(int j=0;j<2;j++){//second loop for column
			printf("Enter a number: ");//ask for number to input
			scanf("%d",&mat1[i][j]);//each slot will be filled
		}
	}//end mat1
	
	printf("\nInputting for Matrix B: \n");//start input for mat2
	for(int i=0;i<2;i++){//first loop for row
		for(int j=0;j<2;j++){//second loop for column
			printf("Enter a number: ");//ask for number to input
			scanf("%d",&mat2[i][j]);//each slot will be filled
		}
	}//end mat2
	
	printf("Matrix A: \n");//display mat1
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d",mat1[i][j]);//display each row and column
		}
		printf("\n");//newline for each row
	}//end mat1
	printf("\n");
	
	printf("Matrix B: \n");//display mat2
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d",mat2[i][j]);//display each row and column
		}
		printf("\n");//newline for each row
	}//end mat2
	
	
	return 0;//end program
}
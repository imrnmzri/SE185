//library functions
#include<stdio.h>
#include <stdlib.h>

int main(){ //main program
	char string[20]; //declare string variable(char array)
	int count=0; // declare count variable to count how many 'b' 
	printf("Insert a string:\n"); //ask user to insert string
	scanf("%s", string); //user inputs string
	printf("String is %s\n", string); //display string
	for(int i=0;i<20;i++){ //loop to count entire string
		if(string[i]=='b') //check if character in each element contains 'b'
			count++; //if above true, then count is added
	} // end of for loop
	printf("Count is: %d\n", count); //display how many 'b' in array
	return 0; //end
}
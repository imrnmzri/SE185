//library functions
#include<stdio.h>
#include <stdlib.h>

int half(char string[]);
int main(){ //main program
	char string[20]; //declare string variable(char array)
	int count; // declare count variable to receive half function
	printf("Insert a string:\n"); //ask user to insert string
	scanf("%s", string); //user inputs string
	printf("String is %s\n", string); //display string
	count=half(string); //half funct is called and value returned to count
	printf("Count is: %d\n", count); //display how many 'b' before half point
	return 0; //end
}

int half(char string[]){ //half function
	int count=0; //declare count to count how many 'b' in half string
	int countStr=0; //declare to count entire string
	for(int i=0;i<20;i++){ //loop to count entire string
		if(string[i]=='\0') //check if character reaches end of string
			break; //if above true, then break from loop
		else // if not
			countStr++; //number of character in string is calculated
	} // end of for loop
	for(int i=0;i<(countStr/2);i++){ //loop to count entire string divided by 2 (half point)
		if(string[i]=='b') //check if character in each element contains 'b'
			count++; //if above true, then count is added
	} // end of for loop
	
	return count; //total count for half loop is added
}//end of function
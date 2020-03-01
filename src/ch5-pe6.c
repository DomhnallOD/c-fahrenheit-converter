/* This program repeatedly converts Fahrenheit temperatures to Celcius and Kelvin.
 * User input is scanned and passed to the "temperatures" function, where the conversions take place.
 * This functionality executes on a loop, which is controlled by proxy of the "scanf" function:
 * The "scanf" function returns a value 0 or 1 depending on whether or not it successfully scanned a value.
 * When user input is numeric, the condition statement is satisfied, and the while loop executes.
 * When input is non-numeric, the condition is not satisfied
 */

#include <stdio.h> //Include stadnard input/output functions from library

void temperatures(double tempFahr); //Declare "temperatures" function prototype

int main(void){ //Declare main function
	double tempFahr; //Declare variable tempFahr of type double

	while(1){ //Infinite loop (until broken by keyword "break")
		printf("Enter Fahrenheit temperature to convert, or \"q\" to quit: "); //Prompt user for input
		int loop = scanf("%lf", &tempFahr); //Scan for numeric input: if input isn't appropriate (i.e. non-numeric), assign 0 to loop
		if(loop==0){ //If input was non-numeric, break while loop
			break;
		}else{ //Else call "temperatures", passing tempFahr as argument
			temperatures(tempFahr);
		}
	}
	getchar(); //Two calls to "getchar" to allow user to determine close of window
	getchar();

	return 0; //Return 0 to main function
}

void temperatures(double tempFahr){ //Define temperatures funciton

	//Define formulas for conversions
	const double tempCelc = 5.0 / 9.0 * (tempFahr - 32.0);
	const double tempKelv = tempCelc + 273.16;

	//Output results, formatted to 2 decimal places
	printf("Fahrenheit: %.2lf\n", tempFahr);
	printf("Celcius: %.2lf\n", tempCelc);
	printf("Kelvin: %.2lf\n", tempKelv);
}

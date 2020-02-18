#include <stdio.h>
#include <stdlib.h>

/*
* Name: Days Calculator
* Author: Zaza H.
* Description: This Program takes in the input from the command line, which are 2 dates, in the form 'dd1 mm1 yyyy1 dd2 mm2 yyyy2'
				and caclulates the number of days between the two dates. The output of the program is simply the number of days.
				How it is done: Program will read in the numbers. First, it will check if the 2 year values are the same. If not,
				it will set a counter with the value of the difference in the years. Then it will check the months to figure out 
				the array value for the number of days. Then it will take the number of days, add it to the array value and that 
				becomes the value of the day. Do the same for the second date. Then subtract the numbers from each other, and 
				output the absolute value of said difference. If either date is a leap year, then said difference will be added 
				final number.
* Date started: September 20th 2019
* Due Date: September 27th 2019
*/

int main( int argc, char *argv[] ){		/*These parameters read in and store the other arguments that were part of the command line in execution.*/

/* The number of days in each month. Used to check if argument values are acceptable. */
	int monthDays[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

/* The number of the first day per month going by the Day Of Year concept */
	int monthLength[12] = { 1, 32, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335 };

/*Date 1 variables*/
	int dd1 = 0;
	int mm1 = 0;
	int yyyy1 = 0;
/*Date 2 variables*/
	int dd2 = 0;
	int mm2 = 0;
	int yyyy2 = 0;
/*Calculating the difference variables*/
	int yrdiff = 0;
	int dayDiff = 0;

/*Counters to hold added values for the years.*/
	int leap = 0;
	int errors = 0;
	int counter = 0;

	/*int day1 = monthLength[mm1-1] + dd1;
	int day2 = monthLength[mm2-1] + dd2;*/

	if ( argc < 7 ) {			/*Checks if the arguments in the command line during execution do not match proper input. */
		  printf ( "Usage: ./dates dd1 mm1 yyyy1 dd2 mm2 yyyy2 \n" );
		  exit ( 1 );
	} 
	else {						/*If execution command line is ok, it assigns the arguments to their corresponding variables*/
		/*
        *
        * THIS AREA IS MISSING CODE!
        * QUICK! FIGURE OUT THE MISSING CODE.
        * tRy yOuR bEsT!
        * ¯\_(ツ)_/¯ 
        * ┻━┻ ︵ ¯\ (ツ)/¯ ︵ ┻━┻
        */
        
	}
	/*Checks if the input dates given are actually real dates, that fits within the month stated.*/
    if(mm1 > 12 || mm2 > 12){
        printf("Error -you entered a month out of range.\n");
        errors = 1;
    }
	if(dd1 > monthDays[mm1-1] || dd1 < 1 || (dd1 == 29 && leap != 1)){
		monthDays[1] = 28;
		printf("Error -you entered %d for the day and that is not in the range.\n", dd1);
		errors = 1;
	}
    if(dd2 > monthDays[mm2-1] || dd2 < 1 || (dd2 == 29 && leap != 1)){
        monthDays[1] = 28;
		printf("Error -you entered %d for the day and that is not in the range.\n", dd2);
		errors = 1;
    }
    if(errors != 0){
        exit(1);
    }
	/*Checks if the year input is a leap year or not, if so, it will check each yr between yr1 & yr2 and increase counter when necessary*/
	for( counter = yyyy1; counter <= yyyy2; counter++){
		if( (counter %4 == 0 && (counter %400 == 0 || counter %100 != 0)) ){
			leap++;
		}
	}

	if(yyyy1 == yyyy2){ /* If the years are the same, no extra days will be counted  */
			yrdiff = 0;
	}
	else{
		yrdiff = yyyy2-yyyy1; /* Otherwise, check how many years there are in between the 2 dates*/
		
	}
        /* Calculates the number of days and stores it into variables*/
		dayDiff = (365*yrdiff) + ((monthLength[mm2-1] + dd2) - (monthLength[mm1-1] + dd1) ) + leap; 
		printf("%d\n", dayDiff);

return 0;
}

/*5.23 (Time in Seconds) Write a function that takes the time as three 
 * integer arguments (for hours, minutes, and seconds) and returns the 
 * number of seconds since the last time the clock “struck 12.” Use this
 * function to calculate the amount of time in seconds between two times,
 * both of which are within one 12-hour cycle of the clock.*/

#include <stdio.h>

int timeinseconds(int hour, int minute, int seconds);
int main(void){
	int hour, minute, second;
	puts("Enter the hour in format hh:mm:ss :");
	scanf("%d:%d:%d", &hour, &minute, &second);
	
	printf("%d second(s) passed since the clock struck 12.\n", timeinseconds(hour, minute, second));


	return 0;
}

int timeinseconds(int hour, int minute, int seconds){
	int x = 0;
	while(x == 0){
		if (hour > 11){
			hour = hour % 12;
		}
		if (minute > 59){
			minute = minute%60;
			hour += 1;
		}
		if (seconds > 59){
			seconds = seconds%60;
			minute += 1;
		}
		if((hour <= 11) && (minute <= 59) && (seconds <= 59)){
			x += 1;
		}
	}
	//how much hours, minutes and seconds passed
	//standard time is 00:00:00
	int hoursInSeconds = hour*3600;
	int minutesInSeconds = minute*60;
	int totalSeconds = seconds + minutesInSeconds + hoursInSeconds;
	
	return totalSeconds;

}

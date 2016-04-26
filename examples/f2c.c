
#include <stdio.h>

/* print Fahrenheit-Celcius table
 * for fahr = 0,20,....,300
 */

int main()
{
	int fahr,celcius;
	int lower,upper,step;

	lower = 0;		/*lower limit of temprature table*/
	upper = 300;	/*upper limit*/
	step = 20;		/*step size*/

	fahr = lower;

	printf("C   \t\tF\n");
	printf("----\t\t----\n");

	while(fahr <= upper) {
		celcius = 5 * (fahr - 32) / 9;
		printf("%d\t\t%d\n", fahr,celcius);
		fahr = fahr + step;
	}
	return 0;
}


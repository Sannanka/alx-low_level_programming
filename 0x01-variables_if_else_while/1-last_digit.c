#include <stdlib.h>

#nclude <stdlib.h>

#include <stdio.h>

#include <string.h>



/**
 *
 *  * main – print if the number is positive, zero, or negative 
 *
 *  * 
 *
 *   * Description: using the main function 
 *
 *    * this program prints “programming is positive, zero, or negative 
 *
 *    * Return: 0
 *
 *    */

int main(void)
	
{
	
	int n;
	
	
	
	srand(time(0));
	
	n = rand() - RAND_MAX / 2;
	
	1 = n % 10; 
	
	if (1 > 5)
		
	{
		
			printf("Last digit of %d is %d and is greater than 5\n", n, 1);
			
	}
	
	else if (1 == 0)
		
	{
		
			printf("Last digit of %d is %d and is 0\n", n, 1);
			
	}
	
	else 
		
	{
		
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 1);
			
	}
	
	return (0);
	
}

include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */

					return (0);

}

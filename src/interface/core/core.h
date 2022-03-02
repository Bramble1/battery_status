#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<math.h>
#include<string.h>

#define msecond 1000000


/*The core file which everything relies upon. And contains the core functions for the entire program,used in the interface.h,which
 * interface is then used in main and this contains the required libraries included.*/

int sanatize_input(char *buffer);
double convert_to_number(char *buffer);
double convert_to_seconds(double *number);



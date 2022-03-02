#include "interface/interface.h"


/*Main relies upon and uses the functions within interface/.h To increase readability*/
int main(int argc, char *argv[])
{
	/*8 bytes of static memory set to 0 will hold interval time for battery status updates*/
	double number = 0x0;
	
	/*obtain,sanatize and convert the user string to a number*/
	process_user_input(&argc,argv,&number);

	/*show battery status every interval (double number)*/
	init_battery_monitor(&number);

	return 0x0;
}

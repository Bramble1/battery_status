#include "interface.h"

/*obtaining user input,making sure string contains only numbers,convert to actual numbers*/
void process_user_input(int *argc,char *argv[],double *minutes)
{
	if(*argc==0x1)
	{
		printf("./program <interval (minutes)>\n");
		exit(EXIT_SUCCESS);
	}

	/*core function to clean input*/
	if(sanatize_input(argv[0x1])==-0x1)
	{
		printf("[!]Numerical values only.\n");
		exit(EXIT_FAILURE);
	}

	/*core function to convert to number*/
	*minutes = convert_to_number(argv[0x1]);
	printf("[+] Processed user input.\n");
}

/*Convert the minutes to seconds,and begin battery monitoring updating every x seconds,as sleep() requires seconds*/
void init_battery_monitor(double *minutes)
{
	int inc=0x1;
	/*core function to convert to seconds*/
	double interval = convert_to_seconds(minutes);

	/*Begin infinite battery monitor,send a kill signal via keyboard to stop process*/
	system("clear");
	printf("[+]Update interval %0.f minutes.\n",*minutes);
	printf("____________________________________________\n");
	sleep(0x5);
	while(0x1)
	{
		system("clear");
		system("acpi");
		printf("\t\t[Update.%d]\t[interval=%0.fm]\n",inc++,*minutes);
		printf("___________________________________________________\n");
		sleep(interval);	
	}
}

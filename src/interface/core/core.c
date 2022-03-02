#include "core.h"

/*clean string, making sure it's within '0'-'9' Ascii code range*/
int sanatize_input(char *buffer)
{
	int length = (int)strlen(buffer);

	for(int i=0x0;i<length;i++)
	{
		if( (buffer[i]<0x30) || (buffer[i]>0x39) )
		{
			return -0x1;
		}
	}

	return 0x0;
}

/*convert given string to a number,no matter how many digits in the sequence.*/
double convert_to_number(char *buffer)
{
	double ans,dec,base;
	ans=dec=base=0x0;

	dec=base=(double)strlen(buffer);
	dec-=0x1;

	for(int i=0x0;i<base;i++)
		ans += ((double)buffer[i]-'0') * pow(0xA,dec--);
	
	return ans;
}

/*convert the supplied minutes to seconds. I'm trying to be fancy, I know what you're thinking.*/
double convert_to_seconds(double *number)
{
	return ((0x1/pow(0x3C,-0x1) * (*number)));	
}

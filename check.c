/*This was used to make sure my assignment was actually submitted!*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	char cmd[100];
	char path[] = "/home/faculty/skoss/cse121/r.gardner-bowles/";
	sprintf(cmd, "cat %s/%s", path, argv[1]);
	// argv[1] is the first argument given to the command, creating a rare moment where a number is functionally base 1
	system(cmd); // inputs cmd to terminal
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	char cmd[100];
	char path[] = "/home/faculty/skoss/cse121/r.gardner-bowles/";
	char argument[] = argv[1];
	char name = argument - 2;
	sprintf(cmd, "gcc %s/%s -o %s", path, argv[1], name);
	// argv[1] is the first argument given to the command, creating a rare moment where a number is functionally base 1
	system(cmd); // inputs cmd to terminal
	sprintf(cmd, "./%s", name);
	return 0;
}

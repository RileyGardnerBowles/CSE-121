/*I used this to submit my assignments!
Still don't understand argv, but I didn't need to.
I've largely switched to Python anyway, as of reading this.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[]) {
	char cmd[100];
	char path[] = "/home/faculty/skoss/cse121/r.gardner-bowles";
	sprintf(cmd, "cp %s %s", argv[1], path);
	// argv[1] is the first argument given to the command, creating a rare moment where a number is functionally base 1
	system(cmd); // inputs cmd to terminal
	return 0;
}

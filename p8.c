/*File creation! Learning how to manipulate files from within codewas INSANE to me.
It felt like I had achieved infinite coding power through making a text file, lol*/
#include <stdio.h>
int main(void)
{
	FILE *fp_out; // declare pointer to a file
	// Do not alter the literal stings below
	char *str1 = "Four score and seven years ago our";
	char *str2 = "fathers brought forth on this continent,";
	char *str3 = "a new nation, conceived in Liberty and dedicated";
	char *str4 = "to the proposition that all men are created equal.";
	char temp[200];
	fp_out = fopen("my_file", "w");
	if (fp_out != NULL)
	{
		sprintf(temp, "%s\n%s\n%s\n%s", str1, str2, str3, str4);
		fputs(temp, fp_out);
		fclose(fp_out);
	}
	else
		printf("I couldn't open the file \"my_file\".\n");
	return 0;
}
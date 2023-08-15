#include <stdio.h>
#define STUDENTS 5
struct person
{
	char firstName[20];
	char lastName[20];
	int age;
};

void printPersonInfo(struct person clone);
void sortByAge(int n, struct person a[]);

int main(void)
{
	printf("\n"); // For terminal visual clarity
	int i = 0, n = STUDENTS;

	struct person student[STUDENTS] =
		{
			{"Bob", "Smith", 21},
			{"Jimmy", "John", 18},
			{"Amy", "Goldberg", 20},
			{"Dan", "Marlo", 17},
			{"Sally", "Sorrow", 16}};

	for (i = 0; i < n; i++)
		printPersonInfo(student[i]);

	sortByAge(STUDENTS, student);

	printf("---------------AFTER SORTING---------------\n");
	for (i = 0; i < n; i++)
		printPersonInfo(student[i]);

	return 0;
}
void printPersonInfo(struct person clone)
{
	printf("Name = %s %s\nAge  =%i\n\n", clone.firstName, clone.lastName, clone.age);
}
void sortByAge(int n, struct person a[])
{
	struct person temp;
	int read, test, write;

	// This is a selection sort.
	for (read = 0; read < n; read++)
	{
		for (write = read, test = read + 1; test < n; test++)
		{
			if (a[test].age < a[read].age)
			{
				write = test;
			}
		}
		temp = a[read];
		a[read] = a[write];
		a[write] = temp;
	}
}
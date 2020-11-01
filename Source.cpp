#include<stdio.h>

float convertToLbs(float km);
int getNum();

int main()
{
	float myWeight = 0;

	/*This is the main body*/





	return 0;
}

float convertToLbs(float kg)
{
	float pounds = kg * 2.2;

	printf("I weigh %f pounds", pounds);

	return 0;
}


#pragma warning(disable: 4996)
int getNum(void)
{
	char record[121] = { 0 };
	int number = 0;

	printf("Enter a number\n");

	fgets(record, 121, stdin);

	if (sscanf(record, "%d", &number) != 1)
	{
		number = -1;
	}
	return number;
}

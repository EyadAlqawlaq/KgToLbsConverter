#include<stdio.h>

float convertToLbs(float km);
int getNum();

int main()
{
	int myWeight = 0;

	myWeight = getNum();
	printf("my weight is %d kilograms\n", myWeight);
	float pounds = convertToLbs(myWeight);

	printf("I weigh %f pounds\n", pounds);


	return 0;
}

float convertToLbs(float kg)
{
	float pounds = kg * 2.2;

	printf("my Weight in pounds is %f\n", pounds);

	return pounds;
}


#pragma warning(disable: 4996)
int getNum(void)
{
	char record[121] = { 0 };
	int number = 0;

	printf("Enter your weight in kilograms\n");

	fgets(record, 121, stdin);

	if (sscanf(record, "%d", &number) != 1)
	{
		number = -1;
	}
	return number;
}

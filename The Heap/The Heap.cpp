// The Heap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	/*int * points;
	points = (int *)malloc(5 * sizeof(int));//malloc = allocate memory
	free (points);*/
	int i, howMany;
	int total = 0;//set tota;l equal to zero All the warnings are cause by not giving the variables a value before using them, that means they will use whatever C++ finds at that memory location instead of using a friendly value like 0.
//If you were to give each of those variables a value(such as 0) initially it should get rid of the warnings, and it may help your output also.
	float average = 0.0;
	int * pointsArray;
	printf_s("How amny numbers do you want to average\n");
	scanf_s("%d", &howMany);
	pointsArray = (int *)malloc(howMany * sizeof(int));
	printf_s("Enter them hoss\n");
	for (i = 0; i < howMany; i++) {
		scanf_s(" %d", &pointsArray[i]);
		total += pointsArray[i];
	}
	average = (float)total / (float)howMany;
	printf_s("average is %f", average);

    return 0;
}


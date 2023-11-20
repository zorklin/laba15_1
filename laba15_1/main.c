#include <stdio.h>

int main() {

	//типізація даних, масив на два елементи 
	int array[2];

	//ввід першого єлемента масиву
	printf("Enter first number:");
	scanf_s("%d", &array[0]);

	//ввід другого єлемента масиву
	printf("Enter second number:");
	scanf_s("%d", &array[1]);

	//перевірка умови (чи більше перше число за друге)
	if (array[0] > array[1]) {

		//вивести перший єлемент массиву
		printf("%d", array[0]);

	}

	//інакше (друге більше або дорівнює першому)
	else {

		//вивести обидва єлементи массиву
		printf("%d and %d", array[0], array[1]);

	}

	//повернути 0
	return 0;
}
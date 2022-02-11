#include <stdio.h>

#define SIZE 7

// function to print array elements
void printArray(int array[], int size) {
	for (int i = 0; i < size; ++i) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

// main function
int main(int argc, char *argv[]) {

	int data[SIZE];
	int n, x;

	for(int i = 0; i < SIZE; i++) {
		fscanf(stdin, "%d", &data[i]);
	}

	n = sizeof(data) / sizeof(data[0]);

	printf("Unsorted Array: \n");
	printArray(data, n);

}
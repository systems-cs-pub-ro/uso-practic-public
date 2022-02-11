#include <stdio.h>

#define SIZE 7

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int array[], int low, int high) {
  
	int pivot = array[high];
	int i = (low - 1);

	for (int j = low; j < high; j++) {
		if (array[j] <= pivot) {
		  i++;
		  swap(&array[i], &array[j]);
		}
	}

	swap(&array[i + 1], &array[high]);
  
  return (i + 1);
}

void quickSort(int array[], int low, int high) {

	if (low < high) {
		int pi = partition(array, low, high);

		quickSort(array, low, pi - 1);
		quickSort(array, pi + 1, high);
	}
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x)
 
        return binarySearch(arr, mid + 1, r, x);
    }
 
    return -1;
}

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

	quickSort(data, 0, n - 1);

	printf("Sorted array in ascending order: \n");
	printArray(data, n);

	fscanf(stdin, "%d", &x);
	printf("Searching for %d in array...", x);

	int result = binarySearch(data, 0, n - 1, x);

	if (result == -1) {
		printf("Element is not present in array\n");
	} else {
		printf("Element is present in array at index: %d\n", result);
	}
}
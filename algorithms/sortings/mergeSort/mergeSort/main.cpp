#include <iostream>
#include <thread>

const int SIZE = 150;

void createArr(int arr[])
{
	for (int i = 0; i < SIZE; i++){
		arr[i] = rand() % 100;
	}
}

void merge(int arr[], int l, int mid, int r)
{
	int i = l;
	int j = mid + 1;
	int *tmp = new int[r * sizeof(int)];
	for (int k = 0; k < r - l + 1; k++){
		if ((j > r) || ((i <= mid) && (arr[i] < arr[j]))){
			tmp[k] = arr[i];
			i++;
		}
		else {
			tmp[k] = arr[j];
			j++;
		}
	}

	for (int k = 0; k < r - l + 1; k++){
		arr[l + k] = tmp[k];
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l == r) return;
	int mid = (r + l) / 2;

	std::thread th1(mergeSort, arr, l, mid);
	std::thread th2(mergeSort, arr, mid + 1, r);

	th1.join();
	th2.join();
	merge(arr, l, mid, r);
}


void printArr(int arr[])
{
	for (int i = 0; i < SIZE; i++){
		std::cout << arr[i] << ' ';
	}
}

int main()
{
	int arr[SIZE];
	createArr(arr);
	mergeSort(arr, 0, SIZE - 1);
	printArr(arr);

	return 0;
}

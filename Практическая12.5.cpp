#include <string>
#include <iostream>
#include <cassert>
#include <vector>

using namespace std;


void heapify(float arr[], int n, int i)
{
	int min = i;
	int l = 2 * i + 1; 
	int r = 2 * i + 2; 

	if (l < n && arr[l] < arr[min])
		min = l;

	if (r < n && arr[r] < arr[min]) //поменял условия для сортировки массива от большего числа к меньшему
		min = r;

	if (min != i)
	{
		swap(arr[i], arr[min]);

		heapify(arr, n, min);
	}
}

void heapSort(float arr[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i >= 0; i--)
	{
		swap(arr[0], arr[i]);

		heapify(arr, i, 0);
	}
}

void printArray(float arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

float travelTime(float distance, float speed) {
	assert(speed > 0);
	return distance / speed;
}

int arrSum(int arr[]) {
	int sum = 0;
	for (int i = 0; i < 15; i++) {
		sum += arr[i];
	}
	return sum;
}

int minNumber(int arr[]) {
	int min = arr[0];
	for (int i = 0; i < 15; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}



int main()
{
	//Задание 1
	/*string residents[10];

	for (int i = 0; i < 10; i++) {
		string surname;
		cout << "Enter resident number " << i + 1 << " :";
		cin >> surname;
		residents[i] = surname;
	}

	for (int i = 0; i < 3; i++) {
		int flat;
		cout << "Enter flat number :";
		cin >> flat;
		if (flat > 10 || flat < 1) {
			cout << "Wrong flat number";
		}
		else {
			cout << residents[flat - 1] << endl;
		}
	}*/
	//Задание 2

	/*float numbers[15];

	cout << "Input : ";

	for (int i = 0; i < 15; i++) {
		cin >> numbers[i];
	}

	int n = sizeof(numbers) / sizeof(numbers[0]);

	heapSort(numbers, n);

	cout << "Sorted array is \n";
	printArray(numbers, n);*/

	//Задание 3
	/*float distance, speed;
	cout << "Input distance and speed :";
	cin >> distance >> speed;

	cout << "Travel  time is " << travelTime(distance, speed) << endl;*/

	//задание 4

	/*int numbers[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};
	int trueSum = (minNumber(numbers) + minNumber(numbers) + 13) * 14 / 2;
	cout << "Recurring number is " << arrSum(numbers) - trueSum;*/

	vector<int> vec;

	int realSize = 0;
	int val;
	cin >> val;
	while (val != -2) {
		if (val == -1) {
			float sum = 0;
			for (int i = 0; i < realSize; i++) {
				sum += vec[i];
			}
			float avg = sum / realSize;

			cout << endl << "avg = " << avg << endl;

			for (int i = realSize - 1; i >= 0; --i) {
				cout << vec[i] << " ";
			}
		}
		else {
			vec.resize(vec.size() + 1);
			vec[vec.size() - 1] = val;
		}
		cin >> val;
	}

}

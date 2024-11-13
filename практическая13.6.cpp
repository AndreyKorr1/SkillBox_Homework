#include <vector>
#include <iostream>

using namespace std;

int main()
{
	//задание 1
	
	/*int del;
	int n;
	vector<int> vecResult;
	cout << "Input vector size: ";
	cin >> n;
	vector<int> vec(n);
	cout << "Input numbers: ";
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		vec.push_back(a);
	}
	cout << "Input number to delete: ";
	cin >> del;
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] != del) {
			vecResult.push_back(vec[i]);
		}
		else {
			continue;
		}
	}
	cout << "Result: ";
	for (int i = vecResult.size() - 1; i >= 0; --i) {
		cout << vecResult[i] << " ";
	}*/

	//Задание 2

	/*vector<float> price{5.4, 234.5, 55.9, 7.6, 67.4};
	vector<float> item{ 1, 1, 1, 1, 0, 0, 4 };
	float result = 0.0;
	for (int i = 0; i < item.size() - 1; i++) {
		result += price[item[i]];
	}
	cout << result;*/

	//Задание 3
	vector<int> a(20);
	int input;
	int count = 0;
	while (true) {
		cout << "input number: ";
		cin >> input;
		if (input == -1) {
			for (int i = 0; i < a.size(); i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
		else {
			if (count < a.size()) {
				a[count] = input;
				count++;
			}
			else if (count >= a.size()) {
				for (int i = 1; i < a.size(); i++) {
					a[i - 1] = a[i];
					a[19] = input;
				}
			}
		}
	}
}

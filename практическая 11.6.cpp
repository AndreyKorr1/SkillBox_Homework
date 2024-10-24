#include <string>
#include <iostream>
using namespace std;



int main()
{
	//Задание 1
	string residents[10];

	for (int i = 0; i < 10; i++) {
		string surename;
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
			cout << residents[flat];
		}
	}
}

#include <iostream>

void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void revers(int* a) {
	for (int i = 0; i < 5; i++) {
		swap(&a[i], &a[9 - i]);
	}
}

bool substr(const char* a, const char* b) {
	while (*a != '\0') {
		const char* pa = a;
		const char* pb = b;
		while (*pa != '\0' && *pb != '\0' && *pa == *pb) {
			pa++;
			pb++;
		}
		if (*pb == '\0') {
			return true;
		}
		a++;
	}
	return false;
}

int main()
{
	//Задание 1

	/*int a = 10;
	int b = 20;

	swap(&a, &b);
	std::cout << a << " " << b;*/

	//Задание 2

	/*int a[10] = {0,1,2,3,4,5,6,7,8,9};
	revers(a);
	for (int i = 0; i < 10; i++) {
		std::cout << *(a + i) << " ";
	}*/


	//Задание 3

	const char* a = "Hello World";
	const char* b = "rld";
	const char* c = "Hel";
	const char* d = "eo";

	std::cout << std::boolalpha << substr(a, b) << std::endl << substr(a, c) << std::endl << substr(a, d);

}

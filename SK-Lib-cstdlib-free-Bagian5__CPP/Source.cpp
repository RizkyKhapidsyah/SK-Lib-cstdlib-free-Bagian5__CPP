#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	float* ptr;
	ptr = (float*)calloc(1, sizeof(float));
	*ptr = 5.233;

	cout << "Before freeing" << endl;
	cout << "Address = " << ptr << endl;
	cout << "Value = " << *ptr << endl;

	free(ptr);

	cout << "After freeing" << endl;
	cout << "Address = " << ptr << endl;
	cout << "Value = " << *ptr << endl;

	_getch();
	return 0;
}
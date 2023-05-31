#include <iostream>
#include "calculation.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	unsigned n = 0;
	cout << "Введите натуральное число n - ";
	cin >> n;
    
	double* arr = new double[n];
	arr = fill_array(arr, n);
	cout << "Полученный масив рандомных:" << endl;
	print_array(arr, n);
	arr = calculate(arr, n);
	cout << endl << "Ответ:" << endl;
	print_array(arr, n);
    delete[] arr;

	
}
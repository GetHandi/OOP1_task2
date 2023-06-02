#include <iostream>
#include <cassert>
#include "calculation.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	
	double arrT1[] = { 98.98, 5.0, -120 };
	double arrT2[] = { 98.98, 5.0, -120 };
	double arrT3[] = { 98.98, 5.0, 0.0, 0.0, -120 };


	assert(abs(calculate(arrT1, 3)[0] - 99.98) < 0.01);
	assert(abs(calculate(arrT2, 3)[1] - 7) < 0.01);
	assert(abs(calculate(arrT3, 5)[4] - 0) < 0.01);


	unsigned n = 0;
	cout << "Введите натуральное число n - ";
	cin >> n;
    
	double* arr = new double[n];
	arr = fill_array(arr, n);
	cout << "Полученный масcив рандомных:" << endl;
	print_array(arr, n);
	arr = calculate(arr, n);
	cout << endl << "Ответ:" << endl;
	print_array(arr, n);
    delete[] arr;

	
}
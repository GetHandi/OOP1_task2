#include <iostream>

using namespace std;

///возвращает массив со случайными действительными числами размера size до двух цифр после запятой;
///a - ссылка на массив;
///size - размер массива;
double* fill_array(double* a, unsigned size)
{
	srand(time(NULL));
	const int max_rand = 10000;
	double lower_bound = 0;
	double upper_bound = 100;
	for (int i = 0; i < size; i++)
	{
		a[i] = lower_bound + (upper_bound - lower_bound) * (rand() % max_rand) / max_rand;
	}
	return a;
}

///выводит массив в консоль в формате "число * = **.**;
///a - ссылка на массив;
///size - размер массива;
void print_array(double *a, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "число " << i+1 << " = " << a[i] << endl;
	}
}


///возвращает массив с вычисленными выражениями: сумма числа массива + факториал его порядкового номера;
///a - ссылка на массив;
///size - размер массива;
double* calculate(double *a, unsigned size)
{
	int f = 1;
	for (int i = 1; i <= size; i++)
	{
		a[i-1] += f;
		f *= (i + 1);
	}
	return a;
}

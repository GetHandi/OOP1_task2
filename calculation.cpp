#include <iostream>

using namespace std;

///���������� ������ �� ���������� ��������������� ������� ������� size �� ���� ���� ����� �������;
///a - ������ �� ������;
///size - ������ �������;
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

///������� ������ � ������� � ������� "����� * = **.**;
///a - ������ �� ������;
///size - ������ �������;
void print_array(double *a, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "����� " << i+1 << " = " << a[i] << endl;
	}
}


///���������� ������ � ������������ �����������: ����� ����� ������� + ��������� ��� ����������� ������;
///a - ������ �� ������;
///size - ������ �������;
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

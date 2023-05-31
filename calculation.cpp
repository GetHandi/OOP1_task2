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
void print_array(double* a, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "����� " << i+1 << " = " << a[i] << endl;
	}
}

///���������� ���������� ����� i;
///i - ����� ������������� �����;
int factorial(unsigned i)
{
	if (i < 0)
	{
		return 0;
	}
	if (i == 1)
	{
		return 1;
	}
	else
		return i * factorial(i - 1);

}

///���������� ������ � ������������ �����������: ����� ����� ������� + ��������� ��� ����������� ������;
///a - ������ �� ������;
///size - ������ �������;
double* calculate(double* a, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] += factorial(i + 1);
	}
	return a;
}

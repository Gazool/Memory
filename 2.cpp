#include <iostream>

using namespace std;

int ar_size = 3;

void array_show_1(int size_ar, int arr[]);
void array_show_d1(int size_ar, int *arr);
void array_show_d2(int size_ar1, int size_ar2, int** arr);

int main()
{
	int first_array[ar_size];
	int second_array[ar_size][ar_size];
	int* first_darray = new int[ar_size];
	int** second_darray = new int*[ar_size];

	for(int i = 0; i < ar_size; ++i)
		second_darray[i] = new int[ar_size];
	
	cout << "Статический  " << endl;
	array_show_1(ar_size, first_array);
	cout << endl;

	cout << "Динамический  " << endl;
	array_show_d1(ar_size, first_darray);
	cout << endl;

	cout << "Cтатический двумерный  " << endl;
	for(size_t i = 0; i < ar_size; ++i)
		for(size_t j = 0; j < ar_size; ++j)
			cout << &second_array[i][j] << endl;
	cout << endl;

	cout << "Динaмический двyмepный  " << endl;
	array_show_d2(ar_size, ar_size, second_darray);
}


void array_show_1(int size_ar, int arr[])
{
	for(size_t i = 0; i < size_ar; ++i)
		cout << &arr[i] << endl;
	cout << endl;
}

void array_show_d1(int size_ar, int *arr)
{
	for(size_t i = 0; i < size_ar; ++i)
		cout << &arr[i] << endl;
	cout << endl;
}

void array_show_d2(int size_ar1, int size_ar2, int** arr)
{
	for(size_t i = 0; i < size_ar1; ++i)
		for(size_t j = 0; j < size_ar2; ++j)
			cout << &arr[i][j] << endl;
	cout << endl;		
}




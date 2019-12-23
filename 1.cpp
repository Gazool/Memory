#include <iostream>

using namespace std;

int global_num;

int main()
{
	int* dynamic_num = new int;
	int static_num = 0;

	cout << "Глобальная  " << &global_num << endl; 
	cout << "Автоматическая  " << &static_num << endl; 
	cout << "Динамическая  " << &dynamic_num << endl; 
}

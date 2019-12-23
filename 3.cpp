#include <iostream>

using namespace std;

struct num_1 
{
	int num;
	short num_1;
	double num_2;
};

struct num2_1 
{
	double num_2;
	short num_1;
	int num;
};

#pragma pack(push, 1)
struct num_2 // Выравненное по 1 байту
{
	int num;
	short num_1;
	double num_2;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct num2_2 
{
	double num_2;
	short num_1;
	int num;
};
#pragma pack(pop)

void print_ad1(num_1 example);
void print_ad2(num_2 example);
void print_ad3(num2_1 example);
void print_ad4(num2_2 example);
void get_size1(num_1 example);
void get_size2(num_2 example);
void get_size3(num2_1 example);
void get_size4(num2_2 example);

int main()
{
	num_1 test_1;	
	num_2 test_2;
	num2_1 test_3;
	num2_2 test_4;
	print_ad1(test_1);
	get_size1(test_1);
	print_ad2(test_2);
	get_size2(test_2);
	print_ad3(test_3);
	get_size3(test_3);
	print_ad4(test_4);
	get_size4(test_4);
}

void print_ad1(num_1 example)
{
	cout << &(example.num) << endl;
	cout <<	&(example.num_1) << endl;
	cout << &(example.num_2) << endl;
	cout << endl;
}

void print_ad2(num_2 example)
{
	cout << &(example.num) << endl;
	cout <<	&(example.num_1) << endl;
	cout << &(example.num_2) << endl;
	cout << endl;
}

void print_ad3(num2_1 example)
{
	cout << &(example.num) << endl;
	cout <<	&(example.num_1) << endl;
	cout << &(example.num_2) << endl;
	cout << endl;
}

void print_ad4(num2_2 example)
{
	cout << &(example.num) << endl;
	cout <<	&(example.num_1) << endl;
	cout << &(example.num_2) << endl;
	cout << endl;
}

void get_size1(num_1 example)
{
	cout << "Size of structure from sum of fields: " << sizeof(example.num) + sizeof(example.num_1) + sizeof(example.num_2) << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(example) << endl;
	cout << endl;
}

void get_size3(num2_1 example)
{
	cout << "Size of structure from sum of fields: " << sizeof(example.num) + sizeof(example.num_1) + sizeof(example.num_2) << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(example) << endl;
	cout << endl;
}

void get_size2(num_2 example)
{
	cout << "Size of structure from sum of fields: " << sizeof(example.num) + sizeof(example.num_1) + sizeof(example.num_2) << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(example) << endl;
	cout << endl;
}

void get_size4(num2_2 example)
{
	cout << "Size of structure from sum of fields: " << sizeof(example.num) + sizeof(example.num_1) + sizeof(example.num_2) << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(example) << endl;
	cout << endl;
}



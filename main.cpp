#include "main.hpp"

int main()
{
	const int SIZE = 100;
	int usernum;
	int length = 10;
	int number[SIZE] = {12, 15, 19, 21, 25, 27, 29, 33, 37, 43};

	cout << "Enter the number to insert\n";
	cin >> usernum;
	printout(number, length);
	insertone(number, length, usernum);
	printout(number, length);

	cout << "Enter the number to delete\n";
	cin >> usernum;
	deleteone(number, length, usernum);
	printout(number, length);
}
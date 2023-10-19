// array insertion

#include <iostream>
#include <iomanip>
using namespace std;

void insertone(int[], int &, int);
void deleteone(int[], int &, int);
void printout(int[], int);

void insertone(int number[], int &N, int usernum)
{
}
void deleteone(int number[], int &N, int usernum)
{
}

void printout(int number[], int last)
{
	for (int i = 0; i < last; i++)
		cout << setw(5) << number[i];
	cout << endl;
}

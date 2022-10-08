#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void makeVector(vector<int> &);
void insertVector(vector<int> &, int);
int deleteVector(vector<int> &, int);

int randnum(void);
int getInput(void);
void printVector(vector<int>);

void makeVector(vector<int> &number)
{
}
void insertVector(vector<int> &number, int usernum)
{
}
int deleteVector(vector<int> &number, int usernum)
{
}
int getInput(void)
{
	int num;
	cout << "Enter your input\n";
	cin >> num;
	return num;
}
int randnum(void)
{
	return rand() % 20;
}
void printVector(vector<int> number)
{
	for (auto iter = number.begin(); iter != number.end(); iter++)
		cout << setw(5) << *iter;
	cout << endl;
}
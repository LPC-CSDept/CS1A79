#include <iostream>
#include <fstream>
using namespace std;

int findcross(int[][10]);
bool checkup(int[][10], int, int);
bool checkdown(int[][10], int, int);
bool checkleft(int[][10], int, int);
bool checkright(int[][10], int, int);
void printout(int[][10], int);

void printout(int M[][10], int cnt)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			cout << setw(5) << M[i][j];
		cout << endl;
	}
	cout << "Total found cross " << cnt << endl;
}

int findcross(int M[][10])
{
}
bool checkup(int M[][10], int i, int j)
{
}
bool checkdown(int M[][10], int i, int j)
{
}
bool checkleft(int M[][10], int i, int j)
{
}
bool checkright(int M[][10], int i, int j)
{
}
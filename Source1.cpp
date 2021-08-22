#include<iostream>;
#include<ctime>
using namespace std;
void vivod(int**& massiv, int& row, int& col)
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << massiv[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void in(int**& massiv, int& row, int& col)
{
	for (int i = 0; i < col; i++)
	{
		massiv[i] = new int[row];
	}
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			massiv[i][j] = 1 + rand() % 50;
		}
	}
}
void  TransposeMatrix(int**& massiv, int& row, int& col)
{
	int temp = 0;
	int x = 0;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; j++)
		{
			temp = massiv[i][j];
			massiv[i][j] = massiv[i + x][j - x];
			massiv[i + x][j - x] = temp;
			if (j >= i)
			{
				x++;
			}
		}
		x = 0;
	}
}
void main()
{
	setlocale(0, "");
	srand(time(NULL));
	int col, row;
	cout << "¬ведите col --> " << endl;
	cin >> col;
	cout << "¬ведите row --> " << endl;
	cin >> row;
	int** massiv = new int* [col];
	void(*obj[4])(int**&, int&, int&) = { in,vivod,TransposeMatrix,vivod };
	for (int i = 0; i < 4; i++)
	{
		obj[i](massiv, row, col);
	}
}
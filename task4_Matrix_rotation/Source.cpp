//Задача
//
//Поворот матрицы [3][3] x раз вокруг своей оси. X вводится с клавиатуры.
//Если x < 0, поворот налево; если x > 0, поворот направо.

#include <iostream>

using namespace std;

int main() {
	int arr1[3][3];
	int arr2[3][3];
	int x0 = 0;
	int x = 0;
	int k = 0;

	cin >> x;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr1[i][j];
		}
	}

		while (x > x0)
		{
			k = 2;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					arr2[j][k] = arr1[i][j];
				}
				k--;
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					arr1[i][j] = arr2[i][j];
				}
			}
			x--;
		}

		while (x < x0)
		{
			for (int i = 0; i < 3; i++)
			{
				k = 2;
				for (int j = 0; j < 3; j++)
				{
					arr2[k][i] = arr1[i][j];
					k--;
				}
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					arr1[i][j] = arr2[i][j];
				}
			}
			x++;
		}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
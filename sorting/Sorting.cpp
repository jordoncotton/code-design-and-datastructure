#include <iostream>

//bubble sort from least to greatest
template <class J>
void BubbleSorting(J arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				J temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int checkArray[8] = { 1, 64, 7, 9, 10, 6, 92, 14 };

	BubbleSorting<int>(checkArray, 8);

	for (int i = 0; i < 8; i++)

	{
		std::cout << checkArray[i] << std::endl;
	}
	system("pause");
}
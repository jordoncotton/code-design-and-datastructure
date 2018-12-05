#include "DynamicArray.h"

int main()
{
		//makes dynamic array
		DynamicArray<int> DynamicArray;

		//creates the array with the specified space
		DynamicArray.MakeArray(5);
		DynamicArray.InsertLast(1);
		DynamicArray.InsertLast(2);
		DynamicArray.InsertLast(3);
		DynamicArray.InsertLast(4);
		DynamicArray.InsertLast(5);
		DynamicArray.InsertLast(6);
		DynamicArray.InsertLast(7);
		DynamicArray.InsertLast(8);
		DynamicArray.InsertLast(9);
		DynamicArray.InsertLast(10);
		DynamicArray.InsertLast(11);
		DynamicArray.InsertLast(12);

		//Take away the value in the last index of the arr.
		DynamicArray.DeleteLast();

		//print out the value of all numbers in the dynamic array.
		for (int i = 0; i < 12; i++)
		{
			std::cout << DynamicArray.GetData(i) << std::endl;
		}

		system("pause");

		return 0;
}
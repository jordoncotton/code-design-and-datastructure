#pragma once
#include <iostream>

template <class D>
class DynamicArray
{
public:
	//constructor for dynamic arr.
	DynamicArray();
	//makes an arr and makes the length of the arr.
	void MakeArray(int initializeSize);
	//infuses a type to the next index of last index used.
	void InsertLast(D);
	//takes away the last index.
	void DeleteLast();
	//takes in the data from the index.
	D GetData(D);

private:
	//pointer for dynamic arr.
	D * data;
	//size of the array.
	int AllocatedSpace;
	//the additional amount of indexs being put in to use.
	int Space;
};

template<class D>
DynamicArray<D>::DynamicArray()
{
	
}

template<class D>
void DynamicArray<D>::MakeArray(int initializeSize)
{
	//sets the arr size and initializes the arr.
	data = new D[initializeSize];
	AllocatedSpace = initializeSize;
	Space = 0;
}

template<class D>
void DynamicArray<D>::InsertLast(D something)
{
	//Will see if the arr is filled up
	if (Space == AllocatedSpace)
	{
		//Increases the additional amount of useful space with a mulitple of 2
		AllocatedSpace *= 2;

		//new test array 
		D* test = new D[AllocatedSpace];
		
		//copies the temp arr of test to data then delete data.
		//Assigning data to test.
		//data with the index of space is assigned to argument.
		for (int i = 0; i < Space; i++)
		{
			test[i] = data[i];
		}
		delete data;
		data = test;
		data[Space] = something;
	}

	//Accessing data for space.
	else
	{
		data[Space] = something;
	}
	Space++;

	////copies the temp Arr into the new arr then deletes the temp arr.
	//data = new D[AllocatedSpace];

	//for (int i = 0; i < Space; i++)
	//{
	//		data[i] = test->data[i];
	//}
	//delete test;

	////sets the next index to the value to input and then will move to the other index.
	//data[Space] = something;
	//Space += 1;

	//return;
	//
}

template<class D>
void DynamicArray<D>::DeleteLast()
{
	//Take away the previous in the arr.
	Space -= 1;
}

template<class D>
D DynamicArray<D>::GetData(D index)
{
	//Returns the value in the index.
	return data[index];
}

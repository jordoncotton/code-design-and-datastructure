#include <iostream>

struct Hero
{
	int mHealth = 0;

	bool operator <(Hero something)
	{
		return mHealth < something.mHealth;
	}
};

Hero lowest(Hero arr[], int size, sometimes)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; i++)
		{
			if (arr[i] < arr[j])
			{
				
				arr[i] = arr[j];

			}
		}
	}
}

int main()
{
	Hero something(100);
	Hero something(100);  
}
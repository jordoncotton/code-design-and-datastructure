#include "link.h"

int main()
{
	nodeType<int> *N1 = new nodeType<int>;
	nodeType<int> *N2 = new nodeType<int>;
	nodeType<int> *N3 = new nodeType<int>;

	N1->info = 4;
	N2->info = 25;
	N3->info = 7;

	N1->next = N2;
	N2->next = N3;
	N3->next = nullptr;

	Iterator<int> Iterator(N1);

	for (int i = 0; i < 3; i++)
	{
		++Iterator;
	}

	list<int> begin;
	begin.initializedList();
	begin.insertFirst(1);
	list<int> end;
	end.initializedList();
}
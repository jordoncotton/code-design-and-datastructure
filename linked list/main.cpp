#include "linklist.h"
#include <iostream>

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

	linklist<int> begin;
	begin.initializedList();
	begin.insertFirst(1);
	begin.insertLast(3);
	begin.deleteNode(1);
	begin.print();
	system("pause");

	begin.initializedList();
	begin.insertFirst(2);
	begin.insertLast(5);
	begin.deleteNode(2);
	begin.print();
	system("pause");

	begin.initializedList();
	begin.insertFirst(4);
	begin.insertLast(6);
	begin.deleteNode(4);
	begin.print();
	system("pause");

	begin.initializedList();
	begin.insertFirst(7);
	begin.insertLast(8);
	begin.deleteNode(7);
	begin.print();
	system("pause");

	begin.initializedList();
	begin.insertFirst(5);
	begin.insertLast(4);
	begin.insertFirst(3);
	begin.insertLast(8);
	begin.deleteNode(8);
	begin.print();
	system("pause");

	begin.initializedList();
	begin.insertFirst(7);
	begin.insertLast(6);
	begin.insertFirst(9);
	begin.insertLast(0);
	begin.deleteNode(0);
	begin.print();
	system("pause");

	
	begin.destroyList();

	/*linklist<int> end;
	end.initializedList();
	end.insertFirst(3);
	end.insertLast(5);
	end.deleteNode(3);*/

	begin.print();

	system("pause");
}
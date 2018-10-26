#pragma once
#include "Iterator.h"

template <class L>
class list
{
protected:
	int count;
	nodeType <L> *first;
	nodeType <L> *last;

public:
	Iterator<L> operator= (const list <L>&);
	void initializedList();
	const bool isEmptyList();
	const void print();
	const int length();
	void destroyList();
	L front();
	L back();

	virtual bool search(const L&) = 0;
	virtual void insertFirst(const L&) = 0;
	virtual void insertLast(const L&) = 0;
	virtual void deleteNode(const L&) = 0;
	
	Iterator<L>begin();
	Iterator<L>end();

	list();
	list(const list<L>&);
	~list();

private:
	void copyList(const list<L>&);
};

template<typename L>
Iterator<L>list<L>::operator=(const list<L>&elsewhere)
{
	copyList(elsewhere);
}

template<typename L>
void list<L>::initializedList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

template<typename L>
const bool list<L>::isEmptyList()
{
	if (count == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

template<typename L>
const void list<L>::print()
{
	nodeType<L>* start = this->first;
	int i = 1;
	while (start != last)
	{
		std::cout << i << ": " << start->data << std::endl;
		start = start->next;
		i++;
	}
}

template<typename L>
const int list<L>::length()
{
	return count;
}

template<typename L>
void list<L>::destroyList()
{
	nodeType<L>*start = this->first;
	start = start->next;
	nodeType<L>*trail = this->first;

	while (trail != last)
	{
		delete trail;
		trail = start;
		start = start->next;
		count--;
	}
}

template<typename L>
L list<L>::front()
{
	return first->info;
}

template<typename L>
L list<L>::back()
{
	return last->info;
}

template<typename L>
Iterator<L> list<L>::begin()
{
	Iterator<L> *node = new Iterator<L>(first);
	return node;
}

template<typename L>
Iterator<L>list<L>::end()
{
	Iterator<L> *node = new Iterator<L>(last);
	return node;
}

template<typename L>
list<L>::list()
{
	initializedList();
}

template<typename L>
list<L>::list(const list<L>&something)
{
	copyList(something);
}

template<typename L>
list<L>::~list()
{
	first = nullptr;
	last = nullptr;
	destroyList();
}

template<typename L>
void list<L>::copyList(const list<L>&other)
{
	first = other;
	last = other;
}
#pragma once
#include "node.h"

template <typename I>
class Iterator
{
public:
	Iterator();
	Iterator(nodeType<I>*ptr);
	I operator*();
	Iterator operator++();

	const bool operator==(const Iterator <I>&);
	const bool operator!=(const Iterator <I>&);

private:
	nodeType<I>* current;
};

template<typename I>
Iterator<I>::Iterator()
{
	current = nullptr;
}

template<typename I>
Iterator<I>::Iterator(nodeType<I>* ptr)
{
	current = ptr;
}

template<typename I>
I Iterator<I>::operator*()
{
	return this->current->info;
}

template<typename I>
Iterator<I> Iterator<I>::operator++()
{
	this->current = this->current->next;
	return *this;
}

template<typename I>
const bool Iterator<I>::operator==(const Iterator<I>&somethingelse)
{
	if (current == somethingelse.current)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename I>
const bool Iterator<I>::operator!=(const Iterator<I>&everything)
{
	if (current != everything.current)
	{
		return true;
	}
	else
	{
		return false;
	}
}
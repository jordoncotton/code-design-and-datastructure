#include "Iterator.h"

template<typename I>
 Iterator<I>::operator*()
{
	return I();
}

template<typename I>
Iterator Iterator<I>::operator++()
{
	return Iterator();
}

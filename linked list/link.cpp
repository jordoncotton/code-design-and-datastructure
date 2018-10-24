#include "link.h"

template<typename L>
inline link<L>::operator=(const link<L>&)
{
}

template<typename L>
void link<L>::initializedList()
{
}

template<typename L>
const bool link<L>::isEmptyList()
{
	return false;
}

template<typename L>
const void link<L>::print()
{
	return void();
}

template<typename L>
const int link<L>::length()
{
	return 0;
}

template<typename L>
void link<L>::destroyList()
{
}

template<typename L>
L link<L>::front()
{
	return L();
}

template<typename L>
L link<L>::back()
{
	return L();
}

template<typename L>
inline link<L> link<L>::begin()
{
	return link<L>();
}

template<typename L>
inline link<L> link<L>::end()
{
	return link<L>();
}

template<typename L>
inline link<L>::link()
{
}

template<typename L>
inline link<L>::link(const link<L>&)
{
}

template<typename L>
inline link<L>::~link()
{
}

template<typename L>
inline void link<L>::copyList(const link<L>&)
{
}

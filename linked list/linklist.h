#pragma once
#include "link.h"

template<typename LL>

class linklist : public list <LL>
{
public:
	bool search(const LL&)override;
	void insertFirst(const LL&)override;
	void insertLast(const LL&)override;
	void deleteNode(const LL&)override;
};

template<typename LL>
bool linklist<LL>::search(const LL &)
{
	nodeType<LL>* type = new nodeType<LL>{ LL };
	for (int i = 0; i < this->count; i++)
	{
		if (type->info == LL)
			return true;
	}
	return false;
}

 template<typename LL>
void linklist<LL>::insertFirst(const LL &beginning)
 {
	start = beginning;
 }

 template<typename LL>
void linklist<LL>::insertLast(const LL &construct)
 {
	last = construct;
 }

 template<typename LL>
void linklist<LL>::deleteNode(const LL &ending)
 {
	delete nodeType<int>;
 }

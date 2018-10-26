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
	return false;
}

 template<typename LL>
void linklist<LL>::insertFirst(const LL &)
 {
 }

 template<typename LL>
void linklist<LL>::insertLast(const LL &)
 {
 }

 template<typename LL>
void linklist<LL>::deleteNode(const LL &)
 {
 }

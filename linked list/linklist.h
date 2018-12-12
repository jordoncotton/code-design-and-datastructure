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
bool linklist<LL>::search(const LL & word)
{
	nodeType<LL>* type = new nodeType<LL>{ word };
	for (int i = 0; i < this->count; i++)
	{
		if (type->info == word)
			return true;
	}
	return false;
}

 template<typename LL>
void linklist<LL>::insertFirst(const LL &add)
 {
	nodeType<LL>* node = new nodeType<LL>;
	node->info = add;
	

	if (this->count == 0)
	{
		this->first = node;
		this->last = node;
		this->count++;
	}
	else
	{
		node->next = this->first;
		this->first = node;
		this->count++;
	}
 }

 template<typename LL>
void linklist<LL>::insertLast(const LL & sub)
 {
	nodeType<LL>* node = new nodeType<LL>{ sub };
	this->count++;

	if (this->last == nullptr)
	{
		this->last = node;
		this->first = node;
	}
	else
	{
		this->last->next = node;
		this->last = node;
	}
	this->last->next = nullptr;
 }

 template<typename LL>
void linklist<LL>::deleteNode(const LL & done)
 {
	if (this->isEmptyList() == false)
	{
		nodeType<LL>* takeaway = this->first, *trail = this->first;
		if (done == this->first->info)
		{
			this->first = this->first->next;
			delete takeaway;
			this->count--;
		}
		else if (done == this->last->info)
		{
			for (int i = 0; i < this->count - 2; i++)
			{
				takeaway = takeaway->next;
				this->last = takeaway;
				delete takeaway;
				this->count--;
			}
		}
		else
		{
			takeaway = takeaway->next;
			while (takeaway->info != done)
			{
				takeaway = takeaway->next;
				trail = trail->next;
			}
			trail->next = takeaway->next;
			delete takeaway;
			this->count--;
		}
	}
 }

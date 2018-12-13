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
	

	if (this->isEmptyList())
	{
		this->first = node;
		this->last = node;
		node->next = nullptr;
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

	if (this->isEmptyList())
	{
		this->last = node;
		this->first = node;
		this->count++;
	}
	else
	{
		this->last->next = node;
		this->last = node;
		this->last->next = nullptr;
		this->count++;
	}
 }

 template<typename LL>
void linklist<LL>::deleteNode(const LL & done)
 {
	nodeType<LL>* takeaway;
	nodeType<LL>* trail;

	if (this->count == 1)
	{
		delete this->first;
		this->initializedList();
		return;
	}
	takeaway = this->first;
	trail = this->first;
	if (this->first->info == done)
	{
		takeaway = takeaway->next;
		delete this->first;
		this->first = takeaway;
		this->count--;
		return;
	}
	takeaway = takeaway->next;

	for (int i = 0; i < this->count; i++)
	{

		if (takeaway->info == done)
		{	//checking if last info is equal to done. The last is assigned to trail,
			//delete the takeaway after trail and return.
			if (this->last->info == done)
			{
				this->last = trail;
				delete takeaway;
				return;
			}
			trail->next = takeaway->next;
			delete takeaway;
			this->count--;
			return;
		}

		if (takeaway->info != done)
		{
			trail = trail->next;
			takeaway = takeaway->next;
		}
		
	}
 }


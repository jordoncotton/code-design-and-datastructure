#pragma once
#include <iostream>

template <typename N>
struct nodeType
{
	N info;
	nodeType *next;
};
#ifndef __ITERATOR_H__
#define __ITERATOR_H__

#include "menuitem.h"

class Iterator
{
public:
	virtual bool hasNext() = 0;
	virtual MenuItem *next() = 0;
};

#endif

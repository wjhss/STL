#ifndef _JJALLOC_
#define _JJALLOC_

#include <new>
#include <cstddef>
#include <cstdio>
#include <climits>
#include <iostream>

namespace JJ
{
template <class T>
inline T* _allocate(ptrdiff_t size,T*)
{
		set_new_handler(0);
		T* tmp = (T*)(::operator mew((size_t)(size *sizeof(T))));
		if(tmp==0)
		{
			cerr << "out of memory"<<endl;
			exit(1);
		}
		return tmp;
}
}

#endif

#include "Header.h"

ostream& operator<<(ostream& os, const DynamicArray& arr)
{
	arr.Output();
	return os;
}

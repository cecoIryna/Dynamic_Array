#include "Header.h"
#include<Windows.h>

DynamicArray::DynamicArray() :ptr(nullptr), size(0)
{}
DynamicArray::DynamicArray(int S)
{
	cout << "Construct by 1 param\n";
	size = S;
	ptr = new int[S];
}

DynamicArray::DynamicArray(const DynamicArray& a)// copy constructor
{
	cout << "Copy construct\n";
	size = a.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = a.ptr[i];
	}
}
DynamicArray::~DynamicArray()
{
	cout << "Destruct\n";
	delete[] ptr;


}
void DynamicArray::Input()
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 20;
	}
}
void DynamicArray::Output() const
{
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << "\t";
	}
	cout << "\n---------------------------------\n";
}
int* DynamicArray::GetPointer() const
{
	return ptr;
}
int DynamicArray::GetSize() const
{
	return size;
}

void DynamicArray::ReSize(int newSize)
{
	int* newPtr = new int[newSize];
	int minSize = (newSize < size) ? newSize : size;
	for (int i = 0; i < minSize; i++)
	{
		newPtr[i] = ptr[i];
	}
	delete[] ptr;
	ptr = newPtr;
	size = newSize;
}

void DynamicArray::Sort()
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (ptr[j] > ptr[j + 1])
			{
				int temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
}

int DynamicArray::Search(int a)
{
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] == a)
		{
			return i;
		}
	}
	return -1;
}

void DynamicArray::Reverse()
{
	for (int i = 0; i < size / 2; i++)
	{
		swap(ptr[i], ptr[size - i - 1]);
	}
}



DynamicArray& DynamicArray::operator=(const DynamicArray& other)
{
	if (this == &other)
		return *this;

	delete[] ptr;

	size = other.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
		ptr[i] = other.ptr[i];

	return *this;
}
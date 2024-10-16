#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int* ptr; // ��������� �� �����. ������
	int size;  // ������ ������� 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	DynamicArray& operator=(const DynamicArray&);
	~DynamicArray();

	void Input();// rand
	void Output() const;// ����� �� �������
	int* GetPointer() const;
	int GetSize() const;

	// ����������� ��������� ������:
	void ReSize(int newSize);// ��������� ������� �������
	void Sort();// ����������(����� �������� ����������)
	int Search(int a); // ����� �������� � �������, ���������� ������ ���������� ��., ���� -1.
	void Reverse(); // �������������� ������������������ ��������� � �������� �������, ������� 12345 -> 54321

	

};


ostream& operator<<(ostream& os, const DynamicArray& arr);
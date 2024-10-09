#include "Header.h"
#include <iostream>



DynamicArray GetObj() //возврат по значению
{
	DynamicArray obj(3);
	obj.Input();

	return obj;
}
int main()
{
	DynamicArray a(5); // constructor 1 param
	a.Input();
	a.Output();

	cout << "Resize:" << endl;
	a.ReSize(7);
	a.Output();
	cout << endl;

	cout << "Sort:" << endl;
	a.Sort();
	a.Output();
	cout << endl;

	cout << "Search:" << endl;
	int index = a.Search(10);
	if (index != -1)
		cout << "Found: " << index << endl;
	else
		cout << "Not found\n";
	int index1 = a.Search(14);
	if (index1 != -1)
		cout << "Found: " << index1 << endl;
	else
		cout << "Not found\n";
	cout << endl;

	cout << "Reverse:" << endl;
	a.Reverse();
	a.Output();
	cout << endl;

	DynamicArray b = a; // copy constructor
	b.Output();

	DynamicArray rezult = GetObj();

	DynamicArray arr1(5);
	arr1.Input();
	cout << "Array 1: ";
	arr1.Output();

	DynamicArray arr2;
	arr2 = arr1;
	cout << "Array 2 (after assignment from Array 1): ";
	arr2.Output();

	arr1.Input();
	cout << "Array 1 (after modification): ";
	arr1.Output();

	cout << "Array 2 (should remain unchanged): ";
	arr2.Output();

	return 0;


	system("pause");
}
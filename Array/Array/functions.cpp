
#include <iostream>
using namespace std;

template<class T>			// template T allows to build any type of array more than just int Array

class Array
{
private:
	T *A;			// Dynamically assign array into pointer A
	int size;
	int length;

public:
	Array()			// Constructor with default size
	{
		size = 10;
		A = new T[10];
		length = 0;			//because no element inserted yet
	}

	Array(int sz)	// parametered constructor
	{
		size = sz;
		length = 0;
		A = new T[size];
	}

	~Array()		// destructor
	{
		delete[]A;
	}

	void Display();
	void insert(int index, T x);
	T Delete(int index);


};

template<class T>

void Array<T>::Display()
{
	for (int i = 0; i < length; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
template<class T>
void Array<T>::insert(int index, T x)
{
	if (index >= 0 && index <= length)
	{
		for (int i = length - 1; i >= index; i--)
			A[i + 1] = A[i];
		A[index] = x;
		length++;
	}
}
template<class T>
T Array<T>::Delete(int index)
{
	int x = 0;
	if (index >= 0 && index < length)
	{
		x = A[index];
		for (int i = index; i < length - 1; i++)
		{
			A[i] = A[i + 1];
		}
		length--;
	}
	return x;
}



int main()
{
	Array<int> arr(10);				//because of template T, float can be declared instead of int also

	arr.insert(0, 5);
	arr.insert(1, 6);
	arr.insert(2, 9);
	arr.Display();
	cout << arr.Delete(1) << endl;
	arr.Display();

	return 0;
}
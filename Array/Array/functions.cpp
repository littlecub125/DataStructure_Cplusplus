
#include <iostream>
using namespace std;


class Array
{
private:
	int* A;			// Dynamically assign array into pointer A
	int size;
	int length;

public:
	Array()			// Constructor with default size
	{
		size = 10;
		A = new int[10];
		length = 0;			//because no element inserted yet
	}

	Array(int sz)	// parametered constructor
	{
		size = sz;
		length = 0;
		A = new int[size];
	}

	~Array()		// destructor
	{
		delete[]A;
	}

	void Display()
	{

	}
	void insert()
	{
	}
};

int main()
{

	return 0;
}
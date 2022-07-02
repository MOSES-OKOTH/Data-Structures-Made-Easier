#include <iostream>
#include <stdlib.h>

using namespace std;

int stack[100];
int count = 0;

int push(int value)
{
	if(count == 100)
	{
		cout << "\nStack Overflow";
		exit(1);
	}
	stack[count] = value;
	count ++;
}

int pop()
{
	if(count == 0)
	{
		cout<< "\nStack Underflow!";
		exit(1);
	}
	
	int deletedValue;
	stack[count-1] = deletedValue;
	return deletedValue;
}

int main()
{
	push(10);
	push(13);
	
	
	for(int i = 0; i <100; i++)
	{
		cout<< stack[i] << " ";
	}
	
	
	
	return 0;
}

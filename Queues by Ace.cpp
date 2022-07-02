#include <iostream>
#include <stdlib.h>

using namespace std;

int Queue[100];
int count = 0;

int Enqueue(int value)
{
	if(count == 100)
	{
		cout << "\nEnqueue impossible. The queue is full."; 
	}
	Queue[count] = value;
	count ++;	
}

int Dequeue()
{
	if(count == 0)
	{
		cout << "\nDequeue terminated. The queue is empty";
		exit(1);
	}
	int popedValue;
	Queue[0] = popedValue;
	
	cout<< popedValue <<" dequeued. \n";
	return popedValue;
}


int main()
{
	Enqueue(10);
	Enqueue(-10);
	Enqueue(13);
	Enqueue(17);
	Enqueue(19);
	Enqueue(23);
	Enqueue(29);
	
	
	for(int i=0; i<100; i++)
	{
		if(Queue[i]!=NULL)
		{
			cout << Queue[i]<<" ";
		}
	}
	
	
	
	return 0;
}


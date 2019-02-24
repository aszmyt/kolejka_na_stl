#include <iostream>    
#include <queue> 
#include <ctime>

const int MAXINT = -2147483647;
using namespace std;

int main()
{
	queue <int> kolejka;

	clock_t start, finish;
	double duration;
	start = clock();
	int i;
	for (i = 0; i < 500000; i++)
	{
		kolejka.push(i);
		cout << kolejka.back()<< " ";
	}
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("\nCzas wykonywania programu %2.5f seconds\n", duration);

	/*
	kolejka.push(13);
	kolejka.push(532);
	kolejka.push(132);
	kolejka.push(12512);
	kolejka.push(122);

	if (kolejka.empty())
	{
		cout << "Kolejka jest pusta." << endl;
	}
	else
	{
		cout << "W kolejce znajduje sie przynajmniej jeden element." << endl;
		cout << kolejka.front() << endl;
		cout << kolejka.front() << endl;
		cout << kolejka.back() << endl;
	}
	while (kolejka.empty() == false)
	{
		cout << kolejka.front() << ", ";
		kolejka.pop();
	}
	*/
	system("pause");
	return 0;
}
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include <conio.h>
using namespace std;

int IngresaN()
{
	int N;
	cout << "Ingerese N:"; cin >> N;
	while (N <2)
	{
		cout << "Ingerese N:"; cin >> N;
	}
	return N;
}
void Figura(int N)
{
	for (int i = 0; i < N; i++)
	{ 
		for (int e = 0; e <N; e++)
			if(i%2==0)
			cout << "X";
			else
			{
				cout << "0";
			}
		
		cout << endl;
	}
}

int main()
{
	int N = IngresaN();
	Figura(N);
	_getch();
}
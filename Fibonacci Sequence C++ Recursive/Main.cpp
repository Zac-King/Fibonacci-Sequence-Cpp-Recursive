#include <iostream>
using namespace std;

int Fibonacci(int n)
{
	if (n <= 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
	while (true)
	{
		int t;
		bool upto;
		do
		{
			cout << "Singular Fibonacci index? \n(0 = Yes) 0r (1 = No)\n";	// Prompt
			cin >> t;	// Input
			system("cls");
		} while (t != 1 && t != 0);
		upto = t;

		int n;
		cout << "Give the Requested Index in Fibonacci Sequence\n";		// Prompt
		cin >> n;	// Input
		system("cls");

		if (upto)
		{
			for (int i = 0; i < n; i++)
				cout << Fibonacci(i) << "\n";	// Output
		}
		else
		{
			cout << Fibonacci(n) << "\n";	// Output
		}

		system("pause");
		system("cls");
	}

	return 1;
}
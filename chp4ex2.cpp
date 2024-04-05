#include <iostream>
#include <iomanip>

using namespace std;

const int MAX = 100;

int main()
{
	for (int i = 1; i <= MAX; i++)
	{
		cout << i << setw(6);
	}

	cout << endl << setw(0);

	cout << "\n\n";

	for (int i = 1; i <= MAX; i++)
	{
		cout << i * i << setw(6);
	}

	cout << endl;

	return 0;
}
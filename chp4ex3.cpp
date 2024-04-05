#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int MAX = 1000;

int main()
{
	const int pad = log10(MAX * MAX) + 2;

	for (int i = 1; i <= MAX; i++)
	{
		cout << i << setw(pad);
	}

	cout << endl << setw(0);

	cout << "\n\n";

	for (int i = 1; i <= MAX; i++)
	{
		cout << i * i << setw(pad);
	}

	cout << endl;

	return 0;
}
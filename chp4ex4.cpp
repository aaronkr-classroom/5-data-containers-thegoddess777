#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
const double MAX = 10.0;

int main()
{
	cout << setprecision(3);

	for (double i = 1; i <= MAX; i += 0.1)
	{
		cout << i << setw(6);
	}

	cout << endl << setw(0);

	cout << "\n\n";

	for (double i = 1; i <= MAX; i += 0.1)
	{
		cout << i * i << setw(6);
	}

	cout << endl;

	return 0;
}
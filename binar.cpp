#include <iostream>

using namespace std;

int main()
{
	int number, binary;
	cout << "enter number ";
	cin >> number;

	for (; number != 0; number <<= 1)
	{
		for (int bin = 1073741824, binary = number; bin > 0; binary %= bin, bin >>= 1)
		{
				cout << binary / bin;
		}
		cout  << " = " << number << endl;
	}
}
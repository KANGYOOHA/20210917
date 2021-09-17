#include <iostream>
#include <string>

using namespace std;

int main()
{
	int Max = 0;
	cin >> Max;

	for (int i = 0; i < Max; i++) 
	{
		for (int k = 0; k < Max -i; k++) 
		{
			cout << " ";
		}
		
		
		for (int j = 0; j<=i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;

}
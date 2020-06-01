#include <iostream>
#include <string>
using namespace std;

int main()
{
	int A, B, C; 
	
	cin >> A >> B; // A / B
	if (B == 0)
	{
		cout << "Impossible";
	}
	else if (A >= B) 
	{
		C = A / B;
		cout << C;
	}
	else if (A < B || A == 0)
	{
		C = 0;
		cout << C;
	}
	return 0;
}
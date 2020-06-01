#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	
	double  a, b, c, d ,x1, x2;
	cin >> a >> b >> c;

	// solving incomplete quadratic equations
	if (a == 0 && b == 0 )
	{
		cout << "";
		return 0;
	}
	else if (a == 0 && c == 0 || b == 0 && c == 0) // a = 0 or b = 0
	{
		x1 = x2 = 0;
		cout << x1 << x2;
		return 0;
	}
	else if (a == 0) // bx +c = 0 
	{
		x1 = -(c / b);
		cout << x1;
		return 0;
	}
	else if (b == 0) // ax2 + c = 0
	{
		if ((-c / a) < 0)
		{
			cout << "";
			return 0;
		}
		else 
		{
			x1 = sqrt(abs(c) / abs(a));
			x2 = -x1;
			cout << x1 << " " << x2;
			return 0;
		}
	}
	else if (c == 0) // ax2 + bx = 0
	{
		x1 = 0;
		x2 = -(b / a);
		cout << x1 << " " << x2;
		return 0;
	}
	// discriminant calculation
	d = pow(b, 2) - 4 * a * c;

	if (d == 0) 
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		cout << x1;
		return 0;
	}
	else if (d > 0) 
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << x1 << " " << x2;
		return 0;
	}
	else
	{
		cout << "";
		return 0;
	}
	return 0;
}
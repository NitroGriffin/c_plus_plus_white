﻿#include <iostream>
using namespace std;


int Factorial(int x) 
{
	int f = 1;
	while (x > 0) 
	{
		f *= x;
		x -= 1;
	}
	return f;
}
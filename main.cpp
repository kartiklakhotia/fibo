#include <iostream>

int fibo(int n)
{
	fibocurrent = 1;
	fiboprev = 1;
	fibonext = 0;
	for (int i=0; i<n; i++)
	{
		fibonext = fibocurrent + fiboprev;
		fiboprev = fibocurrent;
		fibocurrent = fibonext;
	}

	return fibocurrent;
}

int main() {

int x = fibo(10);
std::cout << x << std::endl;

return 0;
}

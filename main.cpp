#include <iostream>

int fibo(int n)
{
	int fibocurrent = 1;
	int fiboprev = 1;
	int fibonext = 2;
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

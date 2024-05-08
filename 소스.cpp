#include <stdio.h>

double slow_power(double x, int n)
{
	int i;
	double r = 1.0;
	for (i = 0; i < n; i++)
		r = r * x;
	return(r);
}

double recursive_power(double x, int n)
{
	if (n == 0) return 1;
	else if ((n % 2) == 0)
		return recursive_power(x * x, n / 2);
	else
		return x * recursive_power(x * x, (n - 1) / 2);
}

int main()
{
	printf("2 ^ 3: %.2lf\n", slow_power(2,3));
	printf("2 ^ 50: %.2lf", recursive_power(2,50));
}
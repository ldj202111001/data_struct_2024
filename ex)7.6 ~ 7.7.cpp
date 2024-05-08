#include <time.h>
#include <stdio.h>

int fib(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return (fib(n - 1) + fib(n - 2));
}

int fibIter(int n)
{
	if (n < 2) return n;
	else {
		int i, tmp, current = 1, last = 0;
		for (i = 2; i <= n; i++) {
			tmp = current;
			current += last;
			last = tmp;
		}
		return current;
	}
}

int main()
{
	double  start, end;

	start = (double)clock() / CLOCKS_PER_SEC;
	printf("fib: %d", fib(35));
	end = (double)clock() / CLOCKS_PER_SEC;
	printf("[time : %lf]\n", (end - start));

	start = (double)clock() / CLOCKS_PER_SEC;
	printf("fibIter: %d", fibIter(35));
	end = (double)clock() / CLOCKS_PER_SEC;
	printf("[time : %lf]\n", (end - start));

}
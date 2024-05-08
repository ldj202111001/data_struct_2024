/*
* 프로그램 내용: 반복적인 거듭제곱 계산과 순환적인 거듭제곱 계산의 시간계산
* 실습날짜: 2024 - 05 - 08
* 학번: 202111001
* 이름: 이동재
*/
#include <time.h>
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
	double  start1, end1;
	double  start2, end2;

	start1 = (double)clock() / CLOCKS_PER_SEC;
	printf("slow power: 2 ^ 500: %.2lf\n", slow_power(2,1022));
	end1 = (double)clock() / CLOCKS_PER_SEC;
	printf("[time : %lf]\n", (end1 - start1));

	start2 = (double)clock() / CLOCKS_PER_SEC;
	printf("fast power: 2 ^ 500: %.2lf\n", recursive_power(2,1022));
	end2 = (double)clock() / CLOCKS_PER_SEC;
	printf("[time : %lf]\n", (end2 - start2));
	
}
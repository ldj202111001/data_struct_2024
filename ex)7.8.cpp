/*
* 프로그램 내용: 하노이의 탑 문제 프로그램
* 실습날짜: 2024 - 05 - 08
* 학번: 202111001
* 이름: 이동재
*/
#include <stdio.h>

void hanoiTower(int n, char from, char tmp, char to)
{
	if (n == 1) printf("원판 1을 %c에서 %c으로 옮긴다.\n", from, to);
	else {
		hanoiTower(n - 1, from, to, tmp);
		printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);
		hanoiTower(n - 1, tmp, from, to);
	}
}
void main() 
{
	hanoiTower(4, 'A', 'B', 'C');
}

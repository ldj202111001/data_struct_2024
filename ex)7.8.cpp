/*
* ���α׷� ����: �ϳ����� ž ���� ���α׷�
* �ǽ���¥: 2024 - 05 - 08
* �й�: 202111001
* �̸�: �̵���
*/
#include <stdio.h>

void hanoiTower(int n, char from, char tmp, char to)
{
	if (n == 1) printf("���� 1�� %c���� %c���� �ű��.\n", from, to);
	else {
		hanoiTower(n - 1, from, to, tmp);
		printf("���� %d�� %c���� %c���� �ű��.\n", n, from, to);
		hanoiTower(n - 1, tmp, from, to);
	}
}
void main() 
{
	hanoiTower(4, 'A', 'B', 'C');
}

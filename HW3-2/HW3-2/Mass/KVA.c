#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c, d, e, f, g, h, i, q;
	float kva;
	printf("������� ���������� ���������: 10\n");
	printf("������� ��������:");
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c,&d, &e, &f, &g, &h, &i, &q);
	kva = ((pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2) + pow(e, 2) + pow(f, 2) + pow(g, 2) + pow(h, 2) + pow(i, 2) + pow(q,2)));
	printf("����� ��������� ��������� ���� %.2f", kva);
}
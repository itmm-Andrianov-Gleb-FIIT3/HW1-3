#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	printf("������� ������� ������������(����� ������):");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == b && b == c && a == c) {
		printf("�������������� �����������\n");
	}
	else if (a == b || b == c || a == c) {
		printf("�������������� �����������\n");
	}
	else if ((a) * (a) == ((b) * (b)) + ((c) * (c)) || (b) * (b) == ((a) * (a)) + ((c) * (c)) || (c) * (c) == ((a) * (a)) + ((b) * (b))) {
		printf("������������� �����������\n");
	}
	else if ((a)+(b) < (c) || (c)+(b) < (a) || (a)+(c) < (b)) {
		printf("�� �������� �������������\n");
	}
	else {
		printf("������������ �����������\n");
	}
	system("pause");
	return 0;
}
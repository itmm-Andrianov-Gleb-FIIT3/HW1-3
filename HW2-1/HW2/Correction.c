#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int age;
	printf("������� �������:");
	scanf_s("%d", &age);
	if (age <= 13 ) {
		printf("�������\n");
	}
	if (age >= 14 && age < 25) {
		printf("���������\n");
	}
	if (25 <= age && age < 60) {
		printf("��������\n");
	}
	if ( age >= 60) {
		printf("��������\n");
	}
	system("pause");
	return 0;
}
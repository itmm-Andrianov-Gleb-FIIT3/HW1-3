#include<stdio.h>
#include<limits.h>
#include<locale.h>
#include<math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a;
	float V, SB, SP;
	printf("������� ������� ����:");
	scanf_s("%d", &a);
	if (a > 0) {
		V = ((a) * (a) * (a));
		SB = ((4) * ((a) * (a)));
		SP = ((6) * ((a) * (a)));
		printf("����� ���� V = %.2f\n", V);
		printf("������� ������� ����������� ���� SB = %.2f\n", SB);
		printf("������� ������ ����������� ���� SP = %.2f\n", SP);
	}
	if (a <= 0) {
		printf("����������� ������� ������� ����\n");
		system("pause");
		return 0;
	}
}
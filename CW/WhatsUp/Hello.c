#include<stdio.h>;
#include<malloc.h>;
#include<locale.h>;
int main() {
	setlocale(LC_ALL, "rus");
	int ST,REG;
	printf("������� ������: ");
	scanf_s("%d", &ST);
	system("cls");
	printf("������� �������� ��� �������:\n");
	printf("1)�������� ������*\n");
	printf("2)�������� ������.\n");
	printf("3)����� � ��������\n");
	printf(" �������� ������������� ������\n");
	printf(" �� ������\n");
	printf(" �������� ������������� ������.\n");
	printf("4)������� ������� [������� ���� ASCII].\n");
	printf("0)�����.\n");
	scanf_s("%d", &REG);

	return 0;
}
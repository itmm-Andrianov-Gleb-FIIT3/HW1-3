#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c, PRYA, TRPR, KRRAD;
	float PRpl, PRper, PRdiag, TRpl, TRper, TRdiag, KRpl, KRdlin, KRdiam;
	printf("����� ����������!");
	Sleep(1000);
	for (int i = 0; i < 2; i++) {
		system("cls");
		printf("��������.");
		Sleep(500);
		system("cls");
		printf("��������..");
		Sleep(500);
		system("cls");
		printf("��������...");
		Sleep(500);
	}
	for (int i = 0; i < 100; i++) {           //�����
		system("cls");
		printf("����� ������:\n");
		printf("1. �������������.\n");
		printf("2. �����������.\n");
		printf("3. ����.\n");
		printf("0. ����� �� ����������\n");
		printf("����: ");
		scanf_s("%d", &a);
		if (a == 0) {
			system("cls");
			system("pause");
			return 0;
		}
		if (a == 1) {                       //�������������
			system("cls");
			printf("������� ��� ������� ��������������: ");
			scanf_s("%d %d", &b, &c);
			system("cls");
			printf("����\n");
			printf("1.����� ������� ��������������.\n");
			printf("2.����� �������� ��������������.\n");
			printf("3.����� ��������� ��������������.\n");
			printf("4.��������� � ������ ������.\n");
			printf("0.�����.\n");
			printf("����:");
			scanf_s("%d", &PRYA);
			if (PRYA == 0) {
				system("cls");
				system("pause");
				return 0;
			}
			if (PRYA == 1) {
				PRpl = ((b) * (c));
				printf("������� ��������������: %.2f\n", PRpl);
				Sleep(5000);
				for (int i = 0; i < 3; i++) {
					system("cls");
					printf("���������� �� ��������� �������� +");
					Sleep(500);
					system("cls");
					printf("���������� �� ��������� �������� -");
					Sleep(500);
				}
			}
			if (PRYA == 2) {
				PRper = (2 * ((b)+(c)));
				printf("�������� ��������������: %.2f\n", PRper);
				Sleep(5000);
				for (int i = 0; i < 3; i++) {
					system("cls");
					printf("���������� �� ��������� �������� +");
					Sleep(500);
					system("cls");
					printf("���������� �� ��������� �������� -");
					Sleep(500);
				}
			}
			if (PRYA == 3) {
				PRdiag = (sqrt(pow(b, 2) + pow(c, 2)));
				printf("��������� ��������������: %.2f\n", PRdiag);
				Sleep(5000);
				for (int i = 0; i < 3; i++) {
					system("cls");
					printf("���������� �� ��������� �������� +");
					Sleep(500);
					system("cls");
					printf("���������� �� ��������� �������� -");
					Sleep(500);
				}
			}
			if (PRYA == 4) {
			}
		}
		if (a == 2) {                                      //�����������
			system("cls");
			printf("������� ��� ������� �������������� ������������: ");
			scanf_s("%d %d", &b, &c);
			system("cls");
			printf("����\n");
			printf("1.����� ������� ������������.\n");
			printf("2.����� �������� ������������.\n");
			printf("3.����� ��������� ������������.\n");
			printf("4.��������� � ������ ������.\n");
			printf("0.�����.\n");
			printf("����:");
			scanf_s("%d", &TRPR);
			if (TRPR == 0) {
				system("cls");
				system("pause");
				return 0;
			}
			if (TRPR == 1) {
				TRpl = (((b) * (c)) / 2);
				printf("������� ������������: %.2f\n", TRpl);
				Sleep(5000);
				for (int i = 0; i < 3; i++) {
					system("cls");
					printf("���������� �� ��������� �������� +");
					Sleep(500);
					system("cls");
					printf("���������� �� ��������� �������� -");
					Sleep(500);
				}
			}
			if (TRPR == 2) {
				TRdiag = (sqrt(pow(b, 2) + pow(c, 2)));
				TRper = ((TRdiag)+(b)+(c));
				printf("�������� ������������: %.2f\n", TRper);
				Sleep(5000);
				for (int i = 0; i < 3; i++) {
					system("cls");
					printf("���������� �� ��������� �������� +");
					Sleep(500);
					system("cls");
					printf("���������� �� ��������� �������� -");
					Sleep(500);
				}
			}
			if (TRPR == 3) {
				TRdiag = (sqrt(pow(b, 2) + pow(c, 2)));
				printf("��������� ������������: %.2f\n", TRdiag);
				Sleep(5000);
				for (int i = 0; i < 3; i++) {
					system("cls");
					printf("���������� �� ��������� �������� +");
					Sleep(500);
					system("cls");
					printf("���������� �� ��������� �������� -");
					Sleep(500);
				}
			}
			if (TRPR == 4) {
			}
		}                               //����
		if (a == 3) {
			system("cls");
			printf("������� ������ �����: ");
			scanf_s("%d", &b);
			system("cls");
			printf("����\n");
			printf("1.����� ������� �����.\n");
			printf("2.����� ����� ���������� �����.\n");
			printf("3.����� ������� �����.\n");
			printf("4.��������� � ������ ������.\n");
			printf("0.�����.\n");
			printf("����:");
			scanf_s("%d", &KRRAD);
			if (KRRAD == 0) {
				system("cls");
				system("pause");
				return 0;
			}
			if (KRRAD == 1) {
				KRpl = (3.14 * pow(b, 2));
				printf(": %.2f\n", KRpl);
				Sleep(5000);
				for (int i = 0; i < 3; i++) {
					system("cls");
					printf("���������� �� ��������� �������� +");
					Sleep(500);
					system("cls");
					printf("���������� �� ��������� �������� -");
					Sleep(500);
				}
			}
			if (KRRAD == 2) {
				KRdlin = (2 * 3.14 * (b));
				printf(": %.2f\n", KRdlin);
				Sleep(5000);
				for (int i = 0; i < 3; i++) {
					system("cls");
					printf("���������� �� ��������� �������� +");
					Sleep(500);
					system("cls");
					printf("���������� �� ��������� �������� -");
					Sleep(500);
				}
			}
			if (KRRAD == 3) {
				KRdiam = (2 * (b));
				printf(": %.2f\n", KRdiam);
				Sleep(5000);
				for (int i = 0; i < 3; i++) {
					system("cls");
					printf("���������� �� ��������� �������� +");
					Sleep(500);
					system("cls");
					printf("���������� �� ��������� �������� -");
					Sleep(500);
				}
			}
		}
	}
}
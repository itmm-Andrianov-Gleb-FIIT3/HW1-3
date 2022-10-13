#include<stdio.h>;
#include<malloc.h>;
#include<locale.h>;
int main() {
	setlocale(LC_ALL, "rus");
	int ST,REG;
	printf("Введите строку: ");
	scanf_s("%d", &ST);
	system("cls");
	printf("Введите действия над строкой:\n");
	printf("1)Заменить строку*\n");
	printf("2)Обрезать строку.\n");
	printf("3)Найти и заменить\n");
	printf(" заданный пользователем символ\n");
	printf(" на другой\n");
	printf(" заданный пользователем символ.\n");
	printf("4)Сменить регистр [Таблица аски ASCII].\n");
	printf("0)Выход.\n");
	scanf_s("%d", &REG);

	return 0;
}
#include<stdio.h>;
#include<malloc.h>;
int main() {
	char* str;
	str = (char*)malloc(sizeof(char) * 100);

	gets(str); //Аналог scanf
	puts(str); //Аналог printf

	int i,size = 0;
	while (str[size] != '\0') {
		size++;
	}

	for (int i = 0; i < size; i++) { //Замена о на О
		if (str[i] == 'o') {         //
			str[i] = 'O';            //
		}
	}

	str[5] = '\0'; //Ограниченме в 5 символов
	size = 5;      //

	printf("String <%s> have lenght %d", str, size);

	free(str);
	return 0;
}
#include <stdio.h>
void task3_1_1() {
	printf("qwe\n");
}
void main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int taskula;
	do {
		printf("Выберите задачу:\n");
		printf("1 - Задача №3.1.1\n");
		printf("0 - Выход из программы\n");
		scanf_s("%d", &taskula);
		switch (taskula) {
		case 1:
			printf("\n\nИсполнение задачи 3.1.1: \n");
			task3_1_1();
			printf("\n\nЗадача закончила своё выполнение: \n\n");
			break;
		}
	} while (taskula != 0);
}

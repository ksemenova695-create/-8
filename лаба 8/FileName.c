
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

void Task0();
void Task1();
void Task1A();
void Task2();
void TaskDZ();

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, ".UTF8");

    Task0();
    Task1();
    Task1A();
    Task2();
    TaskDZ();

    return 0;
}

void Task0() {
    int num;
    char symbol;

    printf("Введите число, сколько раз будет выводиться символ: ");
    scanf_s("%d", &num);

    printf("Введите символ: ");
    scanf_s(" %c", &symbol, 1);

    for (int start = 1; start <= num; start++) {
        putchar(symbol);
    }

    printf("\n");
}

void Task1() {
    int m, n;
    int s = 0;
    int k = 1;

    printf("\nВведите m: ");
    scanf_s("%d", &m);

    printf("Введите n: ");
    scanf_s("%d", &n);

    for (int i = m; i >= n; i--) {
        s += i;
        printf("Выполнено %d раз\n", k++);
    }

    printf("Результат: %d\n", s);
}

void Task1A() {
    long long m;
    long long result = 1;

    printf("\nВведите целое число m: ");
    scanf_s("%lld", &m);

    if (m < 1) {
        printf("Введите число больше нуля.\n");
        return;
    }

    for (int i = 0; result <= m; i++) {
        printf("2^%2d = %10lld\n", i, result);

        if (result > m / 2) {
            break;
        }

        result *= 2;
    }

    printf("Результат: %.1fK\n", m / 1024.0);
}

void Task2() {
    double x;
    double y;
    double step;

    printf("\nФункция: y = x^2 + sin(5x)\n");
    printf("Интервал: [0.1; 2.1]\n");
    printf("Введите шаг табуляции: ");
    scanf_s("%lf", &step);

    if (step <= 0) {
        printf("Шаг должен быть больше нуля!\n");
        return;
    }

    printf("\n      x      |     f(x)\n");
    printf("------------------------\n");

    for (x = 0.1; x <= 2.1 + 1e-9; x += step) {
        y = x * x + sin(5 * x);
        printf("%10.2f | %10.4f\n", x, y);
    }
}

void TaskDZ() {
    int N;
    double product = 1.0;

    printf("\nВведите целое число N: ");
    scanf_s("%d", &N);

    if (N < 1) {
        printf("N должно быть больше нуля!\n");
        return;
    }

    for (int i = 1; i <= N; i++) {
        product *= 1.0 + i / 10.0;
    }

    printf("Произведение = %.10g\n", product);
}

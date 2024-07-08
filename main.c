#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double t1, t2, t3;
    printf("Введіть три натуральних числа t1, t2, t3 (через пробіл):\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    double rate1 = 1.0 / t1;
    double rate2 = 1.0 / t2;
    double rate3 = 1.0 / t3;
    double total_rate = rate1 + rate2 + rate3;
    double total_time = 1.0 / total_rate;
    printf("Час, необхідний для з'їдання пирога: %.2f годин\n", total_time);
    return 0;
}




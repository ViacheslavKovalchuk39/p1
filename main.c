#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double t1, t2, t3;
    printf("������ ��� ����������� ����� t1, t2, t3 (����� �����):\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    double rate1 = 1.0 / t1;
    double rate2 = 1.0 / t2;
    double rate3 = 1.0 / t3;
    double total_rate = rate1 + rate2 + rate3;
    double total_time = 1.0 / total_rate;
    printf("���, ���������� ��� �'������ ������: %.2f �����\n", total_time);
    return 0;
}




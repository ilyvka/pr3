#include <stdio.h>

int main() {
    int a, b;
    printf("������� �������� ���������� a: ");
    scanf("%d", &a);
    printf("������� �������� ���������� b: ");
    scanf("%d", &b);

    int* ptrA = &a;
    int* ptrB = &b;

    *ptrA *= 2;  // ����������� �������� a � 2 ����
    *ptrB /= 2;  // ��������� �������� b � 2 ����

    printf("����� �������� a: %d\n", a);
    printf("����� �������� b: %d\n", b);

    return 0;
}
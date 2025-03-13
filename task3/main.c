#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("������� ������ �������: ");
    scanf("%d", &n);

    int* a = (int*)malloc(n * sizeof(int));
    if (!a) {
        printf("������ ��������� ������.\n");
        return 1;
    }

    printf("������� %d ��������� �������:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0, count = 0;
    printf("������� ������������� ���������: ");
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            printf("%d ", i);
            sum += a[i];
            count++;
        }
    }
    printf("\n");

    if (count > 0)
        printf("������� �������������� ������������� ��������� = %f\n", (float)sum / count);
    else
        printf("������������� ��������� �� �������.\n");

    free(a);
    return 0;
}
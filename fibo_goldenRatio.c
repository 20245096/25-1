#include <stdio.h>

void fibo(int n) {
    printf("�Ǻ���ġ ����: fibo(%d) = ", n);
    for (int i = n-1; i > 0; i--) {
        printf("fibo(%d)", i);
        if (i > 0) {
            printf(" + ");
        }
    }
    printf("fibo(0)\n");
}

int main() {
    int n, a = 0, b = 1, c;

    printf("�Ǻ���ġ ������ �� ����: ");
    scanf("%d", &n);

    fibo(n);

    printf("�Ǻ���ġ ����: %d", a);
    if (n > 1) {
        printf(", %d", b);
    }

    for (int i = 3; i <= n; i++) {
        c = a + b;  
        printf(", %d", c); 

        a = b; 
        b = c; 
    }

    printf("\n���� ������ �� ���� %d, %d �Դϴ�.\n", a, b);

    double ratio = (double)b / a;  
    printf("������ �� ���� ����: %d / %d = %.3f\n", b, a, ratio);

    double golden_ratio = 1.618;
    printf("Ȳ�� ����(�� 1.618)���� ����: %.3f\n", ratio - golden_ratio);

    return 0;
}
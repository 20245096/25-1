#include <stdio.h>

void fibo(int n) {
    printf("피보나치 수식: fibo(%d) = ", n);
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

    printf("피보나치 수열의 항 개수: ");
    scanf("%d", &n);

    fibo(n);

    printf("피보나치 수열: %d", a);
    if (n > 1) {
        printf(", %d", b);
    }

    for (int i = 3; i <= n; i++) {
        c = a + b;  
        printf(", %d", c); 

        a = b; 
        b = c; 
    }

    printf("\n가장 마지막 두 수는 %d, %d 입니다.\n", a, b);

    double ratio = (double)b / a;  
    printf("마지막 두 수의 비율: %d / %d = %.3f\n", b, a, ratio);

    double golden_ratio = 1.618;
    printf("황금 비율(약 1.618)과의 차이: %.3f\n", ratio - golden_ratio);

    return 0;
}
#include <stdio.h>

int subtract(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b; 
        } else {
            b -= a;
        }
    }
    return a; 
}

int main() {
    int num1, num2;
    
    printf("�� ���� �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);
    
    int result = subtract(num1, num2);
    printf("�� ���� �ִ�������: %d\n", result);
    
    return 0;
}
#include<stdio.h>


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    
    int num, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num, &num2);

    swap(&num, &num2);

    printf("After swap: num = %d, num2 = %d\n", num, num2);

    return 0;
}